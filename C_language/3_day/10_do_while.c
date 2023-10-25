#include <stdio.h>

int main(void)
{
	int i = 0,sum = 0;
	do{
		sum += i;
	}while(++i < 101);

	printf("sum = %d\n",sum);

	return 0;
}

