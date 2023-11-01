#include <stdio.h>

int main(void)
{
	char *s;
	s = "hello";

	printf("%s\n",s);
	printf("%p\n",s);
	printf("%p\n",&s);

	return 0;
}
