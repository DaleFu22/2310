#include <stdio.h>

struct student{
		char a;
		int b;
		float c;
};

int main(void)
{
	struct student s1;//类型:struct + 标签名
	printf("sizeof(s1) = %lu\n",sizeof(s1));
	printf("sizeof(struct student) = %lu\n",sizeof(struct student));

	printf("%p\n",&s1.a);
	printf("%p\n",&s1.b);
	printf("%p\n",&s1.c);
	
	return 0;
}
