#include <stdio.h>


int main(void)
{
	int a = 9,b = 3;
#if 1
	int c = a+b;
	printf("a+b = %d\n",c);
#else
	int d = a-b;
	printf("a-b = %d\n",d);
#endif

	return 0;
}
