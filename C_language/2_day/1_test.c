#include <stdio.h>

int main(void)
{
	int a = 1,b = 3,c = 6,d = 8;
	int ret = 0,s;

	ret = (a < 0)?(c = c+2):(b = b+2);

	s = (a < 0)?(c = c+2):(d > 7)?(a = a-2):(b = b+3);
	printf("ret = %d\n",ret);
	printf("s = %d\n",s);
	printf("a = %d\n",a);

	return 0;
}
