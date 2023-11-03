#include <stdio.h>

int main(void)
{
	char ch[]={"abc\0dzf"},*p=ch;

	printf("%c\n",*p+4);

	return 0;
}
