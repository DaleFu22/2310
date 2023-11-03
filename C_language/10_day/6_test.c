#include <stdio.h>

void flip_array(int *p,int n);

int main(void)
{
	int a[5] = {1,4,2,6,8};
	int i;
	printf("翻转前:");
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");

	flip_array(a,5);

	printf("翻转前:");
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	
	return 0;
}

void flip_array(int *p,int n)
{
	int i,temp;
	for(i = 0;i < n/2;i++)
	{
		temp = *(p+i);
		*(p+i) = *(p+4-i);
		*(p+4-i) = temp;
	}
}
