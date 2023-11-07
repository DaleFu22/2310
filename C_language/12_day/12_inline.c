#include <stdio.h>


int add_num(int a,int b);
static inline int sub_num(int a,int b);

int main(void)
{
	int a = 9,b = 6;
	int c = add_num(a,b);
	int d = sub_num(a,b);
	printf("c = %d\n",c);
	printf("d = %d\n",d);

	return 0;
}

int add_num(int a,int b)
{
	printf("计算a+b\n");
	return a+b;
}

static inline int sub_num(int a,int b)
{
	printf("计算a-b\n");
	return a-b;
}
