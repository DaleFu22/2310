#include <stdio.h>
#include <strings.h>
#include <string.h>

int a[5];

int main(void)
{
	int i;
#if 0
	//全部初始化
	int a[5] = {1,3,5,7,9};
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
#endif
#if 0
	//部分初始化
	int a[5] = {1,3,9};
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
#endif
#if 0
	//将数组初始化为0
	int a[5] = {0};
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
#endif
#if 0
	//将元素初始化为0使用bzero函数
	int a[5];
//	bzero(a,20);
	bzero(a,sizeof(a));//当数组名作为sizeof参数时，代表整个数组
	printf("sizeof(a) = %lu\n",sizeof(a));
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
#endif
#if 0
	//将元素初始化为0使用memset
	int a[5];
	memset(a,0,sizeof(a));
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
#endif
#if 0
	//指定元素初始化
	int a[5] = {1,2,[4] = 5};
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
#endif
#if 0
	int a[] = {1,3,5,7,9};
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
#endif
//	static int a[5];
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");


	return 0;
}
