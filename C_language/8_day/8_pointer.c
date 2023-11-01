#include <stdio.h>

int main(void)
{
	int a[2][3] = {{1,2,3},{4,5,6}};
	int *pa[2] = {a[0],a[1]};
//	int *pa[2] = {&a[0][0],a[1][0]};
	int i,j;
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
//			printf("%d\t",pa[i][j]);
			printf("%d\t",*(pa[i]+j));
		}
		printf("\n");
	}

	return 0;
}
