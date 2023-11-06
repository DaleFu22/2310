#include <stdio.h>

struct stu{
	char a:3;
	char :2;
	char c:4;
	char d:7;
};

int main(void)
{
	struct stu s;
	printf("sizeof(s) = %lu\n",sizeof(s));
//	printf("%p\n",s.a);//位域无法打印出地址

	return 0;
}
