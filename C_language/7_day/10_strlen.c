#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "hello world";
	int	lenth;
	lenth = strlen(s);

	printf("strlen(s) = %d\n",lenth);
	printf("sizeof(s) = %lu\n",sizeof(s));

	return 0;
}
