#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

void success(void);
void failed(void);

#define my_assert(s)	(s) ? ((void) 0) : (failed())

int main(void)
{
	int a = 9,b = 8;

	my_assert(a<b);

	printf("hello world\n");

	return 0;
}

void success(void)
{
//	printf("no problem...\n");
}

void failed(void)
{
	printf("have a problem...\n");
	kill(getpid(),SIGKILL); 
}
