#include <stdio.h>

union s{
	int a;
	long b;
	char c[50];
	long double d;
};
//联合体也要满足有效对齐原则
int main(void)
{
	union s s1;
	printf("sizeof(s1) = %lu\n",sizeof(s1));

	return 0;
}
