#include <stdio.h>

//void X_n(int x,int n);//函数声明
void X_n(int ,int );//函数声明

int main(void)
{
	int x,n;
	printf("求x的n次方:");
	scanf("%d%d",&x,&n);
	X_n(x,n);

	return 0;
}

void X_n(int x,int n)
{
	int i;
	int sum = 1;
	for(i = 0;i < n;i++)
	{
		sum *= x;
	}
	printf("%d的%d次方为%d\n",x,n,sum);
}

