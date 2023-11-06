#include <stdio.h>

union s{
	int a;
	long b;
	char c;
};

int main(void)
{
	union s s1;
	printf("sizeof(s1) = %lu\n",sizeof(s1));

	return 0;
}
