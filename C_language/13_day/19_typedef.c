#include <stdio.h>

#define my_int int *
typedef int * new;

int main(void)
{
	my_int a,b;//替换成int * a,b;此时a是int *而b是int
	new c,d;	//此时c和d都会被定义为int *

	printf("sizeof(a) = %lu\n",sizeof(a));
	printf("sizeof(b) = %lu\n",sizeof(b));
	printf("sizeof(c) = %lu\n",sizeof(c));
	printf("sizeof(d) = %lu\n",sizeof(d));

	return 0;
}
