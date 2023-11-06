#include <stdio.h>

#define SUM(x) (x) + (x)
#define SUM_NEW(x) ((x) + (x))

int main(void)
{
	printf("%d\n",SUM(5));
	printf("%d\n",SUM(2) * SUM(3));//SUM(2)*SUM(3) ==>(2)+(2) * (3)+(3) == 11
	printf("%d\n",SUM_NEW(2) * SUM_NEW(3));//SUM(2)*SUM(3) ==>((2)+(2)) * ((3)+(3)) == 24

	return 0;
}
