#include <stdio.h>

#define N	int
typedef int	M;

int main(void)
{
	int a = 4;
	M b = 6;//==>相当于int b
	N c = 666;

	printf("a+b = %d\n",a+b);
	printf("c = %d\n",c);

	return 0;
}
