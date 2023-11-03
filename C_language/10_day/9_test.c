#include <stdio.h>

void Print_Array(int (*)[3],int,int);

int main(void)
{
	int a[2][3] = {{1,3,2},{7,5,9}},i,j;

	Print_Array(a,2,3);
}

void Print_Array(int (*p)[3],int n,int m)
{
	int i,j;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < m;j++)
		{
			//printf("%d\t",p[i][j]);
			printf("%d\t",*(*(p+i)+j));
		}
		puts("");
	}
}
