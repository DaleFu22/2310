#include <stdio.h>

int main(void)
{
	int score;
	printf("请输入分数：");
	scanf("%d",&score);

	if(score > 60)
	{
		if(score >= 90)
		{
			printf("优秀\n");
		}
		{
			printf("中等\n");
		}
	}
	else
	{
		printf("不及格，菜鸡\n");
	}

	return 0;
}
