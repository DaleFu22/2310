#include <stdio.h>

int main(void)
{
	int i = 0;
	for(i = 0;i < 100;i++)
	{
		if(i%2 == 0)
			continue;
		printf("%d\t",i);
	}
	puts("");

	return 0;
}
