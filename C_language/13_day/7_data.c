#include <stdio.h>

extern int a;
//extern int b;

static void fun(void)
{
	a += 10;
	printf("a = %d\n",a);
	printf("&a = %p\n",&a);
#if 0
	b += 10;
	printf("b = %d\n",b);
	printf("&b = %p\n",&b);
#endif
}
