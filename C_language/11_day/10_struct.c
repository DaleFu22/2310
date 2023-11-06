#include <stdio.h>

struct test{	
	long n;	
	char x;	
	long double m;	
	char z;	
};	

struct student{	
	char a;	
	int b;	
	struct test t;	//嵌套结构体本身也需要满足自对齐和有效对齐
	float c;	
	short d;	
	long e;	
};	

int main(void)
{
	struct student s1;
	printf("sizeof(s1) = %lu\n",sizeof(s1));
	printf("%p\n",&s1.b);
	printf("%p\n",&s1.t.n);
	printf("%p\n",&s1.t.z);
	printf("%p\n",&s1.c);

	return 0;
}

