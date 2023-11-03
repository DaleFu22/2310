#include <stdio.h>

void Print_Array(int n);

int main(void)
{
	int a[2][3] = {{1,3,2},{7,5,9}},i,j;

	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			Print_Array(a[i][j]);
		}
		puts("");
	}
}

void Print_Array(int n)
{
	printf("%d\t",n);
}
