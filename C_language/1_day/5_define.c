#include <stdio.h>

#define A	30

int main(void)
{
	int a = 50;
	printf("A+50 = %d\n",A+50);
	{
		int a = 666;
		printf("a = %d\n",a);
	}
	printf("a = %d\n",a);

	return 0;
}

#if 0
void func(void)
{
	a = a+1;
}
#endif
