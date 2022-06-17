#ifndef __LINUX_SWITCHSYSCALL_H
#define __LINUX_SWITCHSYSCALL_H
#include <linux/unistd.h>
#include <linux/linkage.h>
#include <linux/types.h>

extern int schedflag;

struct procdat{
	long counter;
	long nice;
	long weight;
	long uid;
	long pid;
	long prio;
	int processnumber;
};

#endif
