#include <stdio.h>

//void Print_Array(int p[2][3],int,int);
//void Print_Array(int p[666][3],int,int);
void Print_Array(int p[][3],int,int);
//void Print_Array(int p[][666],int,int);

int main(void)
{
	int a[2][3] = {{1,3,2},{7,5,9}},i,j;

	Print_Array(a,2,3);
}

//void Print_Array(int p[2][3],int n,int m)
void Print_Array(int p[666][3],int n,int m)
//void Print_Array(int p[][666],int n,int m)//第二个下标不能进行任意修改，因为属于行指针定义的类型
{
	int i,j;
	printf("sizeof(p) = %lu\n",sizeof(p));
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
