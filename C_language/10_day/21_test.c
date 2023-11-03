#include <stdio.h>

int main(void)
{
	int a = -1;
	int b[5] = {0};
	printf("%lu\n",sizeof(b)/sizeof(b[0]));
	if(sizeof(b)/sizeof(b[0]) > -1)
	{
		printf("hello\n");
	}
	else
	{
		printf("world\n");
	}
	return 0;
}

