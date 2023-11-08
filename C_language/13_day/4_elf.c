#include <stdio.h>
#include <stdlib.h>

int a=7;
int b;

int main(void)
{
	int c = 8;
	static int d;
	static int e = 9;
	int *p = NULL;
	p = (int *)malloc(4);

	printf("&a = %p\n",&a);
	printf("&b = %p\n",&b);
	printf("&c = %p\n",&c);
	printf("&d = %p\n",&d);
	printf("&e = %p\n",&e);
	printf("p = %p\n",p);
	printf("&p = %p\n",&p);

	return 0;
}
