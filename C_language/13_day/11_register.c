#include <stdio.h>

//register int b = 888;//register不能修饰全局变量

int main(void)
{
	register int a = 666;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
//	printf("&a = %p\n",&a);//寄存器变量无法得到其地址，因为寄存器变量不在内存中

	return 0;
}
