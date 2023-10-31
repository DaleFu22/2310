#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "hello world";
	char s2[] = "aaa";

	printf("%s\n",strstr(s1,s2));
}
