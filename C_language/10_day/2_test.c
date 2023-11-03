#include <stdio.h>

void Print_Array(int n);

int main(void)
{
	int a[5] = {2,4,3,1,6};
	int i;
	for(i = 0;i < 5;i++)
	{
		Print_Array(a[i]);
	}
	puts("");

	return 0;
}

void Print_Array(int n)
{
	printf("%d\t",n);
}
