#include <stdio.h>

int main(void)
{
	int a[3][4] = {
			{1,2,3,4},
			{5,6,7,8},
			{-1,-2,-3,-4}
	};
	int i,j;
//	int *p = a[0];//a[0] == &a[0][0]  p == &a[0][0]
	int (*p)[4] = a;
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 4;j++)
		{
//			printf("%d\t",a[i][j]);
//			printf("%d\t",*(*(a+i)+j));
			printf("%d\t",*(*(p+i)+j));
		}
		puts("");
	}


	return 0;
}
