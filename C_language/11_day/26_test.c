#include <stdio.h>

#define N	10

int main(void)
{
	int a = 8,b = 9;
	int c;
	//执行c等于a+b操作
	c = a+b;
	//比较c和N的大小
	if(c > N)
	{
		printf("hello\n");
	}
	else
	{
		printf("world\n");
	}

#if 1
	printf("我是赵四\n");
#else
	printf("我是王五\n");
#endif

	return 0;
}
