#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "how";
	char s2[] = "world";
	
	printf("拷贝前:%s\n",s2);
	strcpy(s2,s1);
	printf("拷贝后:%s\n",s2);
	printf("%c\n",s2[4]);


	return 0;
}
