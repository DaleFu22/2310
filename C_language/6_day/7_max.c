#include <stdio.h>

int main(void)
{
	int a[3][4] = {
			{1,3,0,-9},
			{32,8,90,-98},
			{7,6,33,88}
	};

	int min = a[0][0];
	int i,j,n = 0,m = 0;
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 4;j++)
		{
			if(min > a[i][j])
			{
				min = a[i][j];
				n = i;
				m = j;
			}
		}
	}

	printf("最小值为%d\n行:%d\n列:%d\n",min,n,m);

	return 0;
}
