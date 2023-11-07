#include <stdio.h>

void fun(int n)
{
	printf("n = %d\n",n);
	n--;
	if(n)//写递归函数一定要有回归条件，这个条件不满足，则停止递归，进入回归
	fun(n);
}

int main(void)
{
	fun(5);

	return 0;
}
