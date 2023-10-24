#include <stdio.h>

int main(void)
{  
	int c;
	printf("Enter a character:");
	c=getchar();
	printf("%c--%d->%#x\n", c, c, c);
}
