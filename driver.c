#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static int __init dog_init(void) {
    printk(KERN_INFO "Hello, World!\n");
    return 0;
}

static void __exit dog_exit(void) {
    printk(KERN_INFO "Good bye!\n");
}

module_init(dog_init);
module_exit(dog_exit);

MODULE_AUTHOR("Street Dogg <streetdogg@pyjamabrah.com>");
MODULE_LICENSE("GPL");