#include <stdio.h>

int Summation_Array(int p[],int n);

int main(void)
{
	int a[6] = {1,4,2,6,8,9};
	printf("求和得到:%d\n",Summation_Array(a,6));

	return 0;
}


int Summation_Array(int p[],int n)
{
	int i,sum = 0;
	for(i =0;i < n;i++)
	{
		sum += p[i];
	}

	return sum;
}

