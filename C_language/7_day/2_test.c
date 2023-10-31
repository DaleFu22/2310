#include <stdio.h>

int main(void)
{
	int n,i,length = 0;
	int a[20];

	printf("请输入一个十进制数:");
	scanf("%d",&n);

	while(n/2){
		a[length++] = n%2;
		n = n/2;
	}

	a[length++] = n%2;

	for(i = length-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	printf("\n");

	return 0;
}
