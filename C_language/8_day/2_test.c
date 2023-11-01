#include <stdio.h>

int main(void)
{
	int a[5] = {1,3,5,7,9};
	int *p = a;
	int i = 0;
#if 0
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
//		printf("%d\t",i[a]);
//		printf("%d\t",*(p+i));
//		printf("%d\t",p[i]);
//		printf("%d\t",i[p]);
//		printf("%d\t",*(a+i));
//		printf("%d\t",*p++);
//		printf("%d\t",*a++);//违法操作，a是地址常量，不能对常量赋值
	}
#endif
	while(p <= &a[4])
	{
		printf("%d\t",*p++);
	}

	return 0;
}
