#include <stdio.h>

int main(void)
{
	int year;
	printf("请输入年份:");
	scanf("%d",&year);

	if(year < 0)
	{
		printf("输入年份格式错误\n");
		return -1;
	}
	if(year % 4 == 0)
	{
		if(year %100 != 0)
		{
			printf("是闰年\n");
		}
		else
		{
			if(year % 400 == 0)
			{
				printf("是闰年\n");
			}
			else
			{
				printf("不是闰年\n");
			}
		}
	}
	else
	{
		printf("该年份不是闰年\n");
	}

	return 0;
}

