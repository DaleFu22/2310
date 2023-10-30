#include <stdio.h>

int main(void)
{
	int a[7] = {2,1,4,6,7,3,0};
	int i,j,temp,count = 0;
	printf("排序前：");
	for(i = 0;i < 7;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
	for(i = 0;i < 7-1;i++)//比较的趟数
	{
		for(j = 0;j < 7-1-i;j++)//每一趟的比较
		{
			if(a[j] < a[j+1])
			{
				count++;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		if(count == 0)
		{
			break;
		}
		count = 0;
	}
	printf("排序后：");
	for(i = 0;i < 7;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");

	return 0;
}
