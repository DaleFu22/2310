#include <stdio.h>

int main(void)
{
	int a[7] = {2,1,4,6,7,3,0};
	int i,j,temp;
	printf("排序前：");
	for(i = 0;i < 7;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
	for(i = 0;i < 7-1;i++)//趟数
	{
		for(j = i+1;j < 7;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("排序后：");
	for(i = 0;i < 7;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");

	return 0;
}
