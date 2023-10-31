#include <stdio.h>

int main(void)
{
	int a[6] = {1,4,3,5,7,8};

	int *p = a;

	printf("*(p+3) = %d\n",*(p+3));
	printf("*p+3 = %d\n",*p+3);
	printf("p = %p\n",p);
	printf("p+3 = %p\n",p+3);
	printf("a = %p\n",a);
	printf("&a = %p\n",&a);
	printf("&a+1 = %p\n",&a+1);

	printf("*++p = %d\n",*++p);
	printf("*(p++) = %d\n",*(p++));
	printf("*p = %d\n",*p);

	printf("p - a = %lu\n",p-a);

	return 0;
}
