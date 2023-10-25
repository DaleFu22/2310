#include <stdio.h>

int main(void)
{
	int score;
	printf("请输入分数：");
	scanf("%d",&score);

	switch(score/10)
	{
		case 10:
		case 9:
		{
			printf("A\n");
		}
		break;
		case 8:
		{
			printf("B\n");
		}
		break;
		case 7:
		{
			printf("C\n");
		}
		break;
		case 6:
		{
			printf("D\n");
		}
		break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		{
			printf("E\n");
		}
		break;
		default:
		{
			printf("分数不在区间内\n");
		}
	}

	return 0;

}
