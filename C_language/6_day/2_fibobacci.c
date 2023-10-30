#include <stdio.h>

int main(void)
{
	int a[10] = {1,1};
	int i;
	for(i = 2;i < 10;i++)
	{
		a[i] = a[i-2]+a[i-1];
	}
	for(i = 9;i >= 0;i--)
	{
		printf("%d\t",a[i]);
	}
	puts("");

	return 0;
}
