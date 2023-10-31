#include <stdio.h>

int main(void)
{
	int a = 6;
	int *p = &a;
	int **q = &p;
	int ***c = &q;

	printf("a = %d\n*p = %d\n**q = %d\n***c = %d\n",a,*p,**q,***c);
	printf("sizeof(p) = %lu\n",sizeof(p));
	printf("sizeof(q) = %lu\n",sizeof(q));
	printf("sizeof(c) = %lu\n",sizeof(c));
	printf("sizeof(a) = %lu\n",sizeof(a));

	return 0;
}
