#include <stdio.h>

//auto int b = 8;//auto不能修饰全局变量

int main(void)
{
	auto int a = 9;
	printf("a = %d\n",a);
	printf("b = %d\n",b);

	return 0;
}
