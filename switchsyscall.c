#include <linux/switchsyscall.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/types.h>
#include <asm/current.h>

extern int schedflag=1;//redhat1 stride2
asmlinkage int sys_switchsyscall(int schedn)
{
	if((schedn==2) || (schedn ==1))
	{
		schedflag=schedn;
		printk("Scheduler %d on ", schedflag);
	}
	return schedflag;
}
	
