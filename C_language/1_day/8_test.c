#include <stdio.h>

int main(void)
{
	int a = 6,b = 8,c = 6,d = 8;

	if((a = a-6) && (b = b-1))
		printf("hello\n");
	else
		printf("你好\n");

	printf("a = %d\nb = %d\n",a,b);

	if((c = c+6) || (d = d+8))
		printf("world\n");
	else
		printf("世界\n");

	printf("c = %d\nd = %d\n",c,d);

	return 0;
}
