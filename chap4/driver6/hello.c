#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");

void external_sub(void) __attribute__ ((unused));

void external_sub(void)
{
	/* do nothing */
}

static int hello_init(void)
{
	printk(KERN_ALERT "driver loaded\n");

	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "driver unloaded\n");
}

module_init(hello_init);
module_exit(hello_exit);

