#include <stdio.h>

int main(void)
{
	char *s[5] = {"Apple","Orange","Grape","Pear","Peach"};

	int i;
	for(i = 0;i < 5;i++)
	{
		printf("%s\n",s[i]);
	}

	printf("%p\n",s);
	printf("%p\n",s+1);
	printf("%p\n",&s);
	printf("%p\n",&s+1);

	return 0;
}
