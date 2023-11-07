#include <stdio.h>

int fac(int i);

int main(void)
{
	int n = 3;
	int ret = fac(n);

	printf("ret = %d\n",ret);

	return 0;
}

int fac(int i)
{
	int j;
	if (i==0 || i==1) return 1;
	else j=fac(i-1)*i;
	return j;
}
