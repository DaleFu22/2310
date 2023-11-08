#include <stdio.h>

int a;

extern void fun(void);

int main(void)
{
	fun();
	printf("a = %d\n",a);
	printf("&a = %p\n",&a);

	return 0;
}
