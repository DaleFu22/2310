#include "stdio.h"
//#include <stdio.h>

//void X_n(int x,int n);//函数声明
void fun(int ,int );//函数声明

int main(void)
{
	int x,n;
	scanf("%d%d",&x,&n);
	printf("函数调用前:x = %d\tn = %d\n",x,n);
	fun(x,n);
	printf("函数调用后:x = %d\tn = %d\n",x,n);

	return 0;
}

void fun(int x,int n)
{
	printf("in fun x = %d\tn = %d\n",x,n);
	x = 666;
	n = 888;
}

