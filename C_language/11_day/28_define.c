#include <stdio.h>

#define MAX(a,b)		(((a) > (b))?(a):(b))
#define MIN(a,b)		(((a) < (b))?(a):(b))

int main(void)
{
	printf("max = %d\n",MAX(2,6));
	printf("max = %d\n",MAX(6,2));
	printf("min = %d\n",MIN(2,6));
	printf("min = %d\n",MIN(6,2));

	return 0;
}
