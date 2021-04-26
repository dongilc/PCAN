from PCANBasic import *

'''
# crc check program from vesc firmware, dll file generated by below command
> gcc -fPIC -c crc.c
> gcc --shared -ocrc_vesc.dll crc.o
'''
import ctypes
crc_vesc = ctypes.cdll.LoadLibrary('./crc_vesc.dll')

can_packet_id = {
'CAN_PACKET_FILL_RX_BUFFER':0x05,
'CAN_PACKET_PROCESS_RX_BUFFER':0x07
}

comm_set_custom = { 
'COMM_SET_DUTY':5,
'COMM_SET_CURRENT':6,
'COMM_SET_CURRENT_BRAKE':7,
'COMM_SET_RELEASE':100,
'COMM_SET_DPS':101,
'COMM_SET_DPS_VMAX':102,
'COMM_SET_DPS_AMAX':103,
'COMM_SET_SERVO':104,
'COMM_SET_TRAJ':105
}

global pc1

time_prev = 0
msg_type = {'0x0':'PCAN_MESSAGE_STANDARD',
            '0x00':'PCAN_MESSAGE_STANDARD', 
            '0x1':'PCAN_MESSAGE_RTR',
            '0x01':'PCAN_MESSAGE_RTR', 
            '0x2':'PCAN_MESSAGE_EXTENDED',
            '0x02':'PCAN_MESSAGE_EXTENDED', 
            '0x4':'PCAN_MESSAGE_FD',
            '0x04':'PCAN_MESSAGE_FD',
            '0x8':'PCAN_MESSAGE_BRS',
            '0x08':'PCAN_MESSAGE_BRS',
            '0x10':'PCAN_MESSAGE_ESI',
            '0x40':'PCAN_MESSAGE_ERRFRAME',
            '0x80':'PCAN_MESSAGE_STATUS'}


def pcan_Open():
    result = pc1.Initialize(PCAN_USBBUS1, PCAN_BAUD_1M)
    if result != PCAN_ERROR_OK:
        # An error occurred, get a text describing the error and show it
        #
        result = pc1.GetErrorText(result)
        print(result[1])
    else:
        print("PCAN-USB (Ch-1) was initialized")

def pcan_Close():
    # The USB Channel is released
    #
    result = pc1.Uninitialize(PCAN_USBBUS1)
    if result != PCAN_ERROR_OK:
        # An error occurred, get a text describing the error and show it
        #
        result = pc1.GetErrorText(result)
        print(result[1])
    else:
        print("PCAN-USB (Ch-1) was released")

def ReadMessage():
        # We execute the "Read" function of the PCANBasic
        #
        result = pc1.Read(PCAN_USBBUS1)

        if result[0] == PCAN_ERROR_OK:
            # We show the received message
            #
            ProcessMessage(result[1:])
            
        return result[0]

def ReadMessages():
    result = PCAN_ERROR_OK,
    while (result[0] & PCAN_ERROR_QRCVEMPTY) != PCAN_ERROR_QRCVEMPTY:
        result = pc1.Read(PCAN_USBBUS1)
        if result[0] != PCAN_ERROR_QRCVEMPTY:
            ProcessMessage(result[1:])
        else:
            if(result[0] != PCAN_ERROR_QRCVEMPTY):  print('ERROR_CODE:{}'.format(hex(result[0])))

def ProcessMessage(*args):
    global time_prev

    theMsg = args[0][0]
    itsTimeStamp = args[0][1]    

    newMsg = TPCANMsgFD()
    newMsg.ID = theMsg.ID
    newMsg.DLC = theMsg.LEN
    for i in range(8 if (theMsg.LEN > 8) else theMsg.LEN):
        newMsg.DATA[i] = theMsg.DATA[i]
    newMsg.MSGTYPE = theMsg.MSGTYPE
    newTimestamp = TPCANTimestampFD()
    newTimestamp.value = (itsTimeStamp.micros + 1000 * itsTimeStamp.millis + 0x100000000 * 1000 * itsTimeStamp.millis_overflow)

    time = "Timestamp:{:0.3f}usec".format(newTimestamp.value/1000000)
    period = newTimestamp.value - time_prev
    cycle_time = "Cycle Time:{:0.3f}msec".format(period/1000)
    TYPE = "TYPE:{}".format(msg_type[hex(newMsg.MSGTYPE)])
    EID = "EID:{}".format(hex(newMsg.ID))
    DLC = "DLC:{}".format(newMsg.DLC)
    DATA = ' '.join('{:02x}'.format(newMsg.DATA[i]) for i in range(newMsg.DLC))

    if newMsg.MSGTYPE == 0x02:  # PCAN_MESSAGE_EXTEND 
        print(time,"|",TYPE,"|",EID,"|",DLC,"|",DATA,"|",cycle_time)
    
    time_prev = newTimestamp.value

def WriteFrame(id, dlc, data):   
    CANMsg = TPCANMsg()

    CANMsg.ID = id
    CANMsg.LEN = dlc
    CANMsg.MSGTYPE = PCAN_MESSAGE_EXTENDED

    for i in range(CANMsg.LEN):
        CANMsg.DATA[i] = data[i]

    return pc1.Write(PCAN_USBBUS1, CANMsg)

def GetFormatedError(error):
    stsReturn = pc1.GetErrorText(error, 0)
    if stsReturn[0] != PCAN_ERROR_OK:
        return "An error occurred. Error-code's text ({0:X}h) couldn't be retrieved".format(error)
    else:
        return stsReturn[1]

def VescCustumControl(target_vesc_id, ctrl_type, ctrl_value):
    '''
    # Custom Control CAN Msg Frame Structure Example, id=0x53, comm_set_custom=0x65=101=COMM_SET_DPS, data=2000000
    WriteFrame(0x00000553,8,[0x00, 0x24, 0x05, 0x01, 0xFF, 0x65, 0x00, 0x1E])
    WriteFrame(0x00000553,3,[0x07, 0x84, 0x80])
    WriteFrame(0x00000753,6,[0x53, 0x00, 0x00, 0x09, 0xBB, 0x4E])    
    '''
    
    if ctrl_type == 'COMM_SET_DUTY':
        value = int(ctrl_value * 100000.0)
    elif ctrl_type == 'COMM_SET_POS':
        value = int(ctrl_value * 1000000.0)
    elif ctrl_type == 'COMM_SET_RPM' or ctrl_type == 'COMM_SET_RELEASE':
        value = int(ctrl_value)
    else:
        value = int(ctrl_value * 1000.0)

    command = comm_set_custom[ctrl_type]

    d1 = (value >> 24) & 0xFF
    d2 = (value >> 16) & 0xFF
    d3 = (value >> 8) & 0xFF
    d4 = value & 0xFF
    data_arr = [d1, d2, d3, d4]
    
    # Frame1, Frame2 is for 'CAN_PACKET_FILL_RX_BUFFER(0x05)'
    eid1 = (can_packet_id['CAN_PACKET_FILL_RX_BUFFER'] << 8) | target_vesc_id
    dlc1 = 8
    # Frame1 = [0x00(length index), 0x24(COMM_CUSTOM_APP_DATA=36), 0x06(host_model=6=CAN), 0x01(number of vesc), 0xFF(Target_vesc_id=default local=255), command, d1, d2]
    Frame1 = [0x00, 0x24, 0x06, 0x01, 0xFF, command, d1, d2]

    eid2 = (can_packet_id['CAN_PACKET_FILL_RX_BUFFER'] << 8) | target_vesc_id
    dlc2 = 3
    # Frame2 = [0x07(length index), d3, d4]
    Frame2 = [0x07, d3, d4]

    # crc calculation only for 9byte data frame (that is except 0x00, 0x07)
    data_arr = Frame1[1:] + Frame2[1:]
    arr = (ctypes.c_ubyte * len(data_arr))(*data_arr)

    crc = crc_vesc.crc16(arr,9)
    crch = (crc >> 8) & 0xFF
    crcl = crc & 0xFF

    # Frame3 is for 'CAN_PACKET_PROCESS_RX_BUFFER(0x07)'
    eid3 = (can_packet_id['CAN_PACKET_PROCESS_RX_BUFFER'] << 8) | target_vesc_id
    dlc3 = 6
    # Frame2 = [target_vesc_id, send, data_length high, data_length low, crch, crcl]
    Frame3 = [target_vesc_id, 0x00, 0x00, 0x09, crch, crcl]

    '''
    # debug print of can msgs
    print('Frame1 - eid:', format(hex(eid1)), '| dlc:',  format(hex(dlc1)), '| data:', '[{}]'.format(', '.join(hex(x) for x in Frame1)) )
    print('Frame2 - eid:', format(hex(eid2)), '| dlc:',  format(hex(dlc2)), '| data:', '[{}]'.format(', '.join(hex(x) for x in Frame2)) )
    print('Frame3 - eid:', format(hex(eid3)), '| dlc:',  format(hex(dlc3)), '| data:', '[{}]'.format(', '.join(hex(x) for x in Frame3)) )
    '''

    WriteFrame(eid1, dlc1, Frame1)
    WriteFrame(eid2, dlc2, Frame2)
    WriteFrame(eid3, dlc3, Frame3)
    
    print('Run VESC CAN Direct Control,', ctrl_type,':',ctrl_value)


if __name__ == '__main__':
    pc1 = PCANBasic()

    # Open PCAN Device
    pcan_Open()

    '''
    # CAN MSG Read Routine
    num = 0
    # try~ except 특정 예외
    try:
        # 무한 반복
        while True:
            #ReadMessages()
            num += 1
    # Ctrl + C를 입력할 경우
    except KeyboardInterrupt:
        print('Total Rcv number is {}, Quit to receive'.format(num))
    '''

    # CAN MSG Write Routine
    #VescCustumControl(83, 'COMM_SET_DUTY',0.1)
    #VescCustumControl(83, 'COMM_SET_CURRENT',0.5)
    #VescCustumControl(83, 'COMM_SET_CURRENT_BRAKE',5)
    #VescCustumControl(83, 'COMM_SET_DPS',0) # position lock on current position
    VescCustumControl(83, 'COMM_SET_DPS',1000)
    #VescCustumControl(83, 'COMM_SET_DPS_VMAX',2000)
    #VescCustumControl(83, 'COMM_SET_SERVO',0)
    #VescCustumControl(83, 'COMM_SET_RELEASE',0)

    # Close PCAN Device
    pcan_Close()



