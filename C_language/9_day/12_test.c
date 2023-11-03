#include <stdio.h>

int n = 12;
int a;

void fun(void);

int main(void)
{
	printf("a = %d\n",a);
	n += 666;
	printf("main():n = %d\n",n);
	fun();
	printf("after fun():n = %d\n",n);

	return 0;
}

void fun(void)
{
	int n = 0;
	{
		int n = 888;
		printf("n1 = %d\n",n);
	}
	n = 999;
	printf("n2 = %d\n",n);
}
