#include <stdio.h>

int main(void)
{
	int i,j;
	char fruit[][7]={"Apple","Orange","Grape","Pear","Peach"};
#if 0
	for(i = 0;i < 5;i++)
	{
		for(j = 0;j < 7;j++)
		{
			printf("%d",fruit[i][j]);
		}
		puts("");
	}
#endif
	for(i = 0;i < 5;i++)
	{
		printf("%s\n",fruit[i]);
	}

	return 0;
}
