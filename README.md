# PCAN

# 1. install peak-linux-driver-8.11.0
cd peak-linux-driver-8.11.0
sudo make install

# 2. install PCAN-Basic_Linux-4.4.2
cd PCAN-Basic_Linux-4.4.2
sudo make install

# 3. install pcanview 
wget -q http://www.peak-system.com/debian/dists/`lsb_release -cs`/peak-system.list -O- | sudo tee /etc/apt/sources.list.d/peak-system.list
wget -q http://www.peak-system.com/debian/peak-system-public-key.asc -O- | sudo apt-key add -
sudo apt-get update
sudo apt-get install pcanview-ncurses

# 4. Reboot once

