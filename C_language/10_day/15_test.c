#include <stdio.h>

char *Print_Reverse(char *p);

int main(void)
{
	char s[] = "hello world";
	char *a;
	printf("调用前:%s\n",s);
	a = Print_Reverse(s);
	printf("调用后:%s\n",a);
}

char *Print_Reverse(char *p)
{
	static char b[20] = {0};
	int n = 0,i;
	char *q = p;

	while(*p != '\0')
	{
		n++;
		p++;
	}
	p = q;
//	printf("n = %d\n",n);
	for(i = 0;i < n;i++)
	{
		b[i] = p[n-1-i];
	}
//	printf("%s\n",b);
	return b;
}

