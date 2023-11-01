#include <stdio.h>

int main(void)
{
	int a[6] = {1,3,2,4,5,6};
	void *p = a;
	int i;
	for(i = 0;i < 6;i++)
	{
		printf("%d\t",*((int *)p+i));
	}
	printf("\n");
}
