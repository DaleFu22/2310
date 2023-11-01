#include <stdio.h>

int main(void)
{
	const int a = 6;//由const修饰的变量a仍然是变量，不会变成常量
//	a = 9;
	int *p = &a;
	*p = 9;//可以通过间接法去改变它的值
	printf("a = %d\n",a);

	return 0;
}

