#include<stdio.h>
int func(int i)
{
	if(i==1) 
		return 1;
	else
		return func(i-1)+i;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("打印结果为:%d\n",func(n));
	return 0;
}
