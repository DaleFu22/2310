#include <stdio.h>

char *num_to_string(int num,char p[100]);

int main(void)
{
	int n = 1234;
	char str[100] = {0};

	printf("%d\n",n);
	printf("%s\n",num_to_string(n,str));

	return 0;
}

char *num_to_string(int num,char p[100])
{
	char *q = p,*s = p;
	char temp;

	while(num != 0)
	{
		*p++ = num%10+48;
		num /= 10;
	}
	p--;
	while(p > q)
	{
		temp = *p;
		*p = *q;
		*q = temp;
		p--;
		q++;
	}

	return s;
}
