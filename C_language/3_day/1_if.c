#include <stdio.h>

int main(void)
{
	int score;
	printf("请输入一个分数:");
	scanf("%d",&score);
	if(score >= 90)
	{
		printf("优秀\n");
	}
	if(score >= 60 && score < 90)
	{
		printf("中等\n");
	}
	if(score < 60)
	{
		printf("差生\n");
	}

	return 0;
}
