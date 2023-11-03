#include <stdio.h>

int X_n(int ,int );//函数声明

int main(void)
{
	int x,n,sum;
	printf("求x的n次方:");
	scanf("%d%d",&x,&n);
#if 0
	sum = X_n(x,n);
	printf("%d\n",sum);
#endif
#if 0
	printf("%d\n",X_n(x,n));
#endif
	sum = X_n(X_n(X_n(x,n),n),n);
	printf("%d\n",sum);

	return 0;
}

int X_n(int x,int n)
{
	int i;
	int sum = 1;
	for(i = 0;i < n;i++)
	{
		sum *= x;
	}

	return sum;
}

