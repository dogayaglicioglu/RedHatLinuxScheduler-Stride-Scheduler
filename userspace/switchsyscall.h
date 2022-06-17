#include <sys/types.h>
#include <errno.h>
#include <linux/unistd.h>
extern int errno;
extern int schedflag;

struct procdat
{
	long counter;
	long nice;
	long weight;
	long uid;
	long pid;
	long prio;
	long processnumber;
};

_syscall1(int, switchsyscall, int, schedn);
