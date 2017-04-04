#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
static int hello_init(void){
	printk(KERN_ALERT "hello world!\n");
	return 0;
}

static int hello_exit(void){
	printk(KERN_ALERT "i am out!\n");
}

module_init(hello_init);
module_exit(hello_exit);
