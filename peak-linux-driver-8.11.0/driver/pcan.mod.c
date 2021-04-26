#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xc79d2779, "module_layout" },
	{ 0x7152adf6, "pcmcia_dev_present" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x8537dfba, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xcfd04b9c, "pcmcia_enable_device" },
	{ 0x3e2c605d, "pci_free_irq_vectors" },
	{ 0xef82cab8, "pci_write_config_word" },
	{ 0x9875a8e1, "single_open" },
	{ 0x77358855, "iomem_resource" },
	{ 0x164a08ab, "pcmcia_register_driver" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xf039960f, "dma_set_mask" },
	{ 0x3e230885, "single_release" },
	{ 0x42dc2f46, "usb_reset_endpoint" },
	{ 0x37b69db4, "pci_disable_device" },
	{ 0x2c45b2a2, "i2c_transfer" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe9a8fe46, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe83b463, "usb_kill_urb" },
	{ 0xb7a8281, "remove_proc_entry" },
	{ 0xf4bb4b0f, "device_destroy" },
	{ 0x4e82582a, "parport_find_base" },
	{ 0x2db10423, "__register_chrdev" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe12328d2, "driver_for_each_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x72f67319, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x59c0860b, "dma_free_attrs" },
	{ 0x52127626, "device_create_with_groups" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37d12980, "pcmcia_request_io" },
	{ 0xfee7c6cb, "seq_read" },
	{ 0x344fd44f, "pv_ops" },
	{ 0xb6ab5a02, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x249990f8, "dma_get_required_mask" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x8848086a, "param_ops_charp" },
	{ 0x2ea912e9, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x83424675, "pci_alloc_irq_vectors_affinity" },
	{ 0x48c21436, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x2a1cde84, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4e0ecf27, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa2bf42c9, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xea2403a0, "sysfs_remove_file_from_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xa609b337, "class_unregister" },
	{ 0x70884c63, "parport_unregister_device" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x3c3dbb89, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x843526fb, "usb_control_msg" },
	{ 0x37f74190, "pci_read_config_word" },
	{ 0xc08ca96, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x5d3d85b2, "parport_claim" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xe7b3b624, "pcmcia_loop_config" },
	{ 0x628ba560, "__class_register" },
	{ 0x9956e5a4, "_dev_err" },
	{ 0xb0042cd4, "parport_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x93c2c11f, "pci_find_capability" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x875bbf9e, "i2c_del_adapter" },
	{ 0x88cf9ff8, "_dev_info" },
	{ 0xb4055ce3, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x33ce669d, "usb_reset_device" },
	{ 0x912bbf55, "usb_bulk_msg" },
	{ 0xb13784cd, "parport_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x99cd6f53, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdad5fe87, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x26c2e0b5, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeef8516d, "param_ops_byte" },
	{ 0x4e777713, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1f433b7d, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbea0b906, "pci_request_regions" },
	{ 0xf5bb7b3b, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x8b23c2d4, "pcmcia_unregister_driver" },
	{ 0xab738f17, "__pci_register_driver" },
	{ 0xacc38f46, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x377c03bb, "sysfs_add_file_to_group" },
	{ 0x22d870fb, "i2c_bit_add_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x874fcd1b, "pci_iomap" },
	{ 0x5bacf5aa, "param_ops_ushort" },
	{ 0x4c684ef, "proc_create" },
	{ 0x7bfc53a8, "usb_get_current_frame_number" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1125b4f2, "pcmcia_disable_device" },
	{ 0x99db8eb8, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x5827e69d, "param_ops_ulong" },
	{ 0x2e4948d6, "param_ops_uint" },
	{ 0xb9daafa, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xcb64db4d, "usb_alloc_urb" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "pcmcia,parport,i2c-algo-bit");

MODULE_ALIAS("pcmcia:m0377c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pci:v0000001Cd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0014d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BE195D5D998CA2615EC5D89");
