#include <stdio.h>

//extern int a;//只起声明作用
//extern int b;//被声明的变量必须事先已有定义
//extern int a = 7;//声明时不允许进行赋值操作
int a = 888;

void fun(void)
{
	printf("a = %d\n",a);
	printf("&a = %p\n",&a);
//	printf("&b = %p\n",&b);
	a += 10;
}
