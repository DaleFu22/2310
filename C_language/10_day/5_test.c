#include <stdio.h>

/*函数声明*/
void fun(int *,int);
void Print_Array(int *,int);

int main(void)
{
	int i;
	int a[8] = {3,2,6,4,7,9,0,6};
	printf("sizeof(a) = %lu\n",sizeof(a));
	printf("函数调用前:");
//	Print_Array(a);	
	fun(a,8);//a = &a[0]
	printf("函数调用后:");
//	Print_Array(a);
}

//void Print_Array(int *,int n);

void fun(int p[],int n)//我们形参p[5] == *p
{
	printf("sizeof(p) = %lu\n",sizeof(p));
	printf("%d\n",p[3]);
	int i;
	int *q = p;
	for(i = 0;i < n;i++)
	{
		(*p++) += i;
	}
	p = q;
	Print_Array(p,n);
}

void Print_Array(int *p,int n)
{
	int i;
	for(i = 0;i < n;i++)
	{
		printf("%d\t",p[i]);
	}
	puts("");
}
