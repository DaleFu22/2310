#include <stdio.h>

int main(void)
{
	char s1[20] = "hello";
	char s2[] = "world";
	char *p = s1,*q = s2;
#if 0
	while(*p++ != '\0');
//	printf("%d\n",*p);
//	printf("%d\n",*(p-1));
	p--;
#endif
#if 1
	while(*p != '\0')
		p++;
#endif
	while(*q != '\0')
	{
		*p = *q;
		p++;
		q++;
	}
//	*p = '\0';
	printf("%s\n",s1);

	return 0;
}
