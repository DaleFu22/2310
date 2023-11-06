#include <stdio.h>

struct stu{
	char a:3;
	char b:2;
	char c:1;
	char d:2;
};

int main(void)
{
	struct stu s;
	printf("sizeof(s) = %lu\n",sizeof(s));

	return 0;
}
