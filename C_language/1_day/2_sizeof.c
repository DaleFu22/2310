#include <stdio.h>

int main(void)
{
	int a;
	char b;
	long c;
	double d;
	long double e;
	int *f = NULL;
	char *g = NULL;

	printf("sizeof(a) = %lu\n",sizeof(a));
	printf("sizeof(b) = %lu\n",sizeof(b));
	printf("sizeof c = %lu\n",sizeof c);
	printf("sizeof(double) = %lu\n",sizeof(double));
	printf("sizeof(e) = %lu\n",sizeof(e));
	printf("sizeof(f) = %lu\n",sizeof(f));
	printf("sizeof(char *) = %lu\n",sizeof(char *));

	return 0;
}
