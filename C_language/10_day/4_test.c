#include <stdio.h>

/*函数声明*/
void fun(int *);
void Print_Array(int *);

int main(void)
{
	int i;
	int a[5] = {3,2,6,4,7};
	printf("sizeof(a) = %lu\n",sizeof(a));
	printf("函数调用前:");
//	Print_Array(a);	
	fun(a);//a = &a[0]
	printf("函数调用后:");
//	Print_Array(a);
}

//void Print_Array(int *);

void fun(int p[5])//我们形参p[5] == *p
{
	printf("sizeof(p) = %lu\n",sizeof(p));
	int i;
	int *q = p;
	for(i = 0;i < 5;i++)
	{
		(*p++) += i;
	}
	p = q;
	Print_Array(p);
}

void Print_Array(int *p)
{
	int i;
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",p[i]);
	}
	puts("");
}
