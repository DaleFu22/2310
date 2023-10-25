#include <stdio.h>

int main(void)
{
	int i,j;
	for(i = 0;i < 6;i++)//行数
	{
		for(j = 0;j < i;j++)
		{
			printf("_");
		}
		for(j = 0;j <= i;j++)
		{
			printf("%c",'F'-j);
		}
		puts("");
	}

	return 0;
}
