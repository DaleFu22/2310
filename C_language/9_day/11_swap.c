#include <stdio.h>

void Swap_Num(int *,int *);

int main(void)
{
	int a = 666,b = 888;
	printf("&a = %p\n&b = %p\n",&a,&b);
	printf("函数调用前:a = %d\tb = %d\n",a,b);
	Swap_Num(&a,&b);
	printf("函数调用后:a = %d\tb = %d\n",a,b);

	return 0;
}

void Swap_Num(int *a,int *b)
{
	printf("a = %p\nb = %p\n",a,b);
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

