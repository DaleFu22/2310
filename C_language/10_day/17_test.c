#include <stdio.h>

char *Delete_Blank(char *p);

int main(void)
{
	char s[] = "how are you? ";

	printf("%s\n",Delete_Blank(s));

	return 0;
}


char *Delete_Blank(char *p)
{
	char *q = p,*s = p;

	while(*p != '\0')
	{
		if(*p != ' ')
		{
			*s = *p;
			s++;
		}
		p++;
	}
	*s = '\0';
	return q;
}
