#include <stdio.h>

int main(void)
{
	int a[3][3] = {
			{1,2,3},
			{4,5,6},
			{7,8,9}
	};
	int *p = a[0];
	int (*q)[3] = a;

	printf("&a = %p\n",&a);
	printf("&a+1 = %p\n",&a+1);
	printf("a = %p\n",a);
	printf("a+1 = %p\n",a+1);
	printf("p = %p\n",p);
	printf("p+1 = %p\n",p+1);
	printf("q = %p\n",q);
	printf("q+1 = %p\n",q+1);
	printf("a[0] = %p\n",a[0]);
	printf("a[0]+1 = %p\n",a[0]+1);
	printf("&a[0] = %p\n",&a[0]);
	printf("&a[0]+1 = %p\n",&a[0]+1);
	printf("&a[0][0] = %p\n",&a[0][0]);
	printf("&a[0][0]+1 = %p\n",&a[0][0]+1);

	return 0;
}
