#include <stdio.h>

#undef BUFSIZ
#define BUFSIZ	100

int main(void)
{
	printf("%d\n",BUFSIZ);

	return 0;
}
