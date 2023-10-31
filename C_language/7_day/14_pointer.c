#include <stdio.h>

int main(void)
{
	char s = 'n',x = 'v';
	char *p = &s,*c = &x;
	void *q = &s;
	
//	printf("*p = %c\n",*p);
	printf("*q = %c\n",*(char *)q);
}
