#include <stdio.h>
#include <stdarg.h>

int fun(int num,...) // num代表….表示的参数个数
{
	int i;
	va_list p; //代表参数列表
	va_start(p,num);//列表中有的参数，p指向列表的第一个参数
	for(i = 0;i < num;i++)
	{
		printf("%d\n",va_arg(p,int)); //拿到列表中的第一个值，p指向列表中的第二个数据
	}
	va_end(p);
}

int main(void)
{
	fun(6,1,2,3,4,5,6);
	return 0;
}

