#include <stdio.h>

void recur(int a[], int k)
{
	int tmp;
	if( k>0 )//写k>0或k>1都行
	{
		recur( a+1, k-2);
		tmp = a[0];
		a[0] = a[k-1];
		a[k-1] = tmp;
	}
}

int main(void)
{
	int a[7] = {1,3,2,5,7,0,6};
	recur(a,7);

	int i;
	for(i = 0;i < 7;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");

	return 0;
}
