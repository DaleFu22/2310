#include <stdio.h>

int main(void)
{
	int a[5] = {1,3,5,7,9},i;
	int *p = a;

	for(i = 0;i < 5;i++)
	{
//		printf("%d\t",*(p+i));
//		printf("%d\t",p[i]);//[] == *()
//		printf("%d\t",i[a]);
//		printf("%d\t",i[p]);
//		printf("%d\t",*(a+i));
		printf("%d\t",*p++);
//		printf("%d\t",*a++);//不合法的，因为a是指针常量，常量不能赋值
	}
	printf("\n");

	return 0;
}

