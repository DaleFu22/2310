#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[25] = "hello";
	char s2[] = "world";

	printf("连接前:%s\n",s1);
	strcat(s1,s2);
	printf("连接后:%s\n",s1);

	return 0;
}
