#include <stdio.h>

void Print_Reverse(char *p,char *new);

int main(void)
{
	char s[] = "hello world";
	char a[20] = {0};
	printf("调用前:%s\n",s);
	Print_Reverse(s,a);
	printf("调用后:%s\n",a);
}

void Print_Reverse(char *p,char *new)
{
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
		new[i] = p[n-1-i];
	}
}

