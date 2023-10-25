#include <stdio.h>

int main(void)
{
	int num,i;
	printf("输入一个数：");
	scanf("%d",&num);
	for(i = 2;i < num;i++)
	{
		if(num % i == 0)
			break;
	}

	if(i == num)
		printf("素数\n");
	else
		printf("不是素数\n");

	return 0;
}
