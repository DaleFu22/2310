#include <stdio.h>

#define N

int main(void)
{
	int a = 9,b = 3;
#ifndef N
	int c = a+b;
	printf("a+b = %d\n",c);
#else
	int d = a-b;
	printf("a-b = %d\n",d);
#endif

	return 0;
}
