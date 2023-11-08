#include <stdio.h>

int a = 999;
static int b = 888;

static void fun(void);

int main(void)
{
	fun();
	printf("a = %d\n",a);
	printf("b = %d\n",b);

	printf("&a = %p\n",&a);
	printf("&b = %p\n",&b);

	return 0;
}
