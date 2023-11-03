#include <stdio.h>

char *my_strcpy(char *dest,const char *src);

int main(void)
{
	char s1[] = "hello";
	char s2[] = "how";

	printf("%s\n",my_strcpy(s1,s2));

	return 0;
}

char *my_strcpy(char *dest,const char *src)
{
	int i = 0;
	char *p = dest;
#if 0
	while(*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest ='\0';
#endif
	while(*dest++ = *src++);
	printf("%s\n",p);

	return p;
}
