#include <stdio.h>

int main(void)
{
	int a[3][3] = {
				{1,4,2},
				{5,7,3},
				{9,8,6}
	};
	int *p[3] = {a[0],a[1],a[2]};
	int i,j,sum = 0;

	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
//			sum += (*(p[i]+j));
//			sum += p[i][j];
			sum += *(*(p+i)+j);
		}
	}
	printf("sum = %d\n",sum);

	return 0;
}
