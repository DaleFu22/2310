#include <stdio.h>

void fun();

int main(void)
{
	fun();

	return 0;	
}


void fun()
{
	static int a = 6;
	int b = 7;
	printf("&a = %p\n",&a);
	printf("&b = %p\n",&b);
}
