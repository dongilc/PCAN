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
	{ 0xa4b86400, "module_layout" },
	{ 0x86da2171, "pcmcia_dev_present" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x31ca542f, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc7d9b409, "pcmcia_enable_device" },
	{ 0x9af93fd1, "pci_free_irq_vectors" },
	{ 0xf2b3a834, "pci_write_config_word" },
	{ 0xf6fa2eb9, "single_open" },
	{ 0x77358855, "iomem_resource" },
	{ 0x9e0e72d2, "pcmcia_register_driver" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x3f115012, "dma_set_mask" },
	{ 0x3700313a, "single_release" },
	{ 0x856ca8a4, "usb_reset_endpoint" },
	{ 0xf38a3177, "pci_disable_device" },
	{ 0x5672188, "i2c_transfer" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd981b7ff, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x93576750, "usb_kill_urb" },
	{ 0xa3ee9e12, "remove_proc_entry" },
	{ 0xf6cb2bfb, "device_destroy" },
	{ 0x813c538c, "parport_find_base" },
	{ 0x541fd03b, "__register_chrdev" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x30881d58, "driver_for_each_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75cf665f, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1f309b21, "dma_free_attrs" },
	{ 0xb33d077c, "device_create_with_groups" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb9f7afa6, "pcmcia_request_io" },
	{ 0x4e22ab94, "seq_read" },
	{ 0xb421a321, "pv_ops" },
	{ 0x6d546ce, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcf6715ca, "dma_get_required_mask" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xde4c1a24, "param_ops_charp" },
	{ 0x97b51df7, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4c9a97b0, "pci_alloc_irq_vectors_affinity" },
	{ 0x62c1325e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x47a1aa13, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x1b44c663, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xba978e76, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xc41d1af4, "sysfs_remove_file_from_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x5223e0e4, "class_unregister" },
	{ 0xf9732ad1, "parport_unregister_device" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xdb7d9e22, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x90777d9a, "usb_control_msg" },
	{ 0xa7975388, "pci_read_config_word" },
	{ 0xae45846e, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x493910cd, "parport_claim" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x783d0f10, "pcmcia_loop_config" },
	{ 0x6e200dfa, "__class_register" },
	{ 0x885de096, "_dev_err" },
	{ 0xb5adfaca, "parport_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd6e5373b, "pci_find_capability" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x3c5256e3, "i2c_del_adapter" },
	{ 0x589844d9, "_dev_info" },
	{ 0x7e24b7cb, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x42082804, "usb_reset_device" },
	{ 0x6786a0af, "usb_bulk_msg" },
	{ 0xb8a0316a, "parport_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x7b10c123, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3b67ff49, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xb3a666c0, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x592e3c58, "param_ops_byte" },
	{ 0x1c56b625, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf77b56e2, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf1b0769b, "pci_request_regions" },
	{ 0xa3bf6975, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xad936f2a, "pcmcia_unregister_driver" },
	{ 0xfbfddd92, "__pci_register_driver" },
	{ 0x9528195c, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xece509fd, "sysfs_add_file_to_group" },
	{ 0xda14bec3, "i2c_bit_add_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xedb889ae, "pci_iomap" },
	{ 0xca9e9d2f, "param_ops_ushort" },
	{ 0xdb59a12d, "proc_create" },
	{ 0x6024fc7d, "usb_get_current_frame_number" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3af51d5d, "pcmcia_disable_device" },
	{ 0x54836bf2, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xe23f4d3, "param_ops_ulong" },
	{ 0x999f25e3, "param_ops_uint" },
	{ 0x2e7e254f, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85eae14b, "usb_alloc_urb" },
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
