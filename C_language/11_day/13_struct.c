#include <stdio.h>

struct stu{
	char a:4;
	char :0;
	char b:2;
};

int main(void)
{
	struct stu s;
	printf("sizeof(s) = %lu\n",sizeof(s));

	return 0;
}
