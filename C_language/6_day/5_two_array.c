#include <stdio.h>

int main(void)
{
	int i,j;
#if 0
	//按照排列顺序初始化
	int a[3][2] = {1,2,3,4,5,6};
	int *p = a[0];//a[0] == &a[0][0]
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
#if 0
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",*(p+i));
	}
#endif
#endif
#if 0
	//全部初始化
	int a[3][2] = {{1,2},{3,4},{5,6}};
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
#endif
#if 0
	//部分初始化
	int a[3][2] = {1,2,3};
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
#endif
#if 0
	//指定行部分初始化
	int a[3][2] = {{1},{2,3}};
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
#endif
#if 0
	//不指定长度初始化，省略只能是行数，不能省列数
	int a[][2] = {1,2,3,4,5,6};
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}
#endif
	//不指定长度初始化，省略只能是行数，不能省列数
	int a[][2] = {1,2,3,4,5};
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		puts("");
	}

	return 0;
}	
