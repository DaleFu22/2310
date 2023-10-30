#include <stdio.h>

int main(void)
{
	int i = 0;
	char s[100];
	char c;
#if 0
	while( (c = getchar()) != '\n')
	{
		s[i++] = c;
	}
#endif
	while((s[i++] = getchar()) != '\n');

	printf("%s\n",s);

	return 0;
}
