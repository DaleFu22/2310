#include <stdio.h>

struct student{
		int a;
		char b[50];
		long c;
		char d;
};

int main(void)
{
	struct student s1;//类型:struct + 标签名
	printf("sizeof(s1) = %lu\n",sizeof(s1));
	printf("sizeof(struct student) = %lu\n",sizeof(struct student));

	printf("%p\n",&s1.a);
	printf("%p\n",s1.b);
	printf("%p\n",&s1.c);
	printf("%p\n",&s1.d);
	
	return 0;
}
