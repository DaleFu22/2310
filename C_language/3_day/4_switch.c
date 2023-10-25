#include <stdio.h>

int main(void)
{
	char c;
	printf("输入分数等级:");
	scanf("%c",&c);
	switch(c)
	{
		case 'A':
		{
			printf("分数等级:90~100\n");
		}
		break;
		case 'B':
		{
			printf("分数等级:80~89\n");
		}
		break;
		case 'C':
		{
			printf("分数等级:70~79\n");
		}
		break;
		case 'D':
		{
			printf("分数等级:60~69\n");
		}
		break;
		case 'E':
		{
			printf("分数等级:小于60\n");
		}
		break;
		default:
		{
			printf("等级不合法\n");
		}
	}

	return 0;
}
