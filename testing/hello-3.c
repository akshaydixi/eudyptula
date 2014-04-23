#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

static int  hello3_data __initdata = 4;
static int __init hello3_init(void){
	printk(KERN_INFO "Testing kernel message bus: %d\n ",hello3_data);
	return 0;	
}

static void  __exit hello3_exit(void){
	printk(KERN_INFO "Exit message bus\n");
}

module_init(hello3_init);
module_exit(hello3_exit);

