#include <stdio.h>

int b = 3;
int c;

int main(void)
{
	int a[5] = {99,1,2,5,6};
	static int ret;
	int *p;
	int *q = &a;
	p = q;
	ret = p<(p+1);

	printf("ret = %d\n",ret);
	printf("a = %p\n",a);
	printf("&b = %p\n",&b);
	printf("&c = %p\n",&c);
	printf("&ret = %p\n",&ret);

	printf("%d\n",a > &b);

	p = NULL;

	return 0;
}
