#include <stdio.h>

int a = 100;

void fun(void)
{
	int b = 100;//局部变量会随着语句块执行结束跟着被一起清空
	static int c = 100;//static定义的变量只会定义一次。
	a++;
	b++;
	c++;
	printf("a = %d\n",a);
	printf("c = %d\n",c);
	printf("b = %d\n",b);
}

int main(void)
{
	fun();
	fun();

//	printf("c = %d\n",c);//不行，因为c是静态局部变量，只会改变生命周期不会改变作用域。
	return 0;
}
