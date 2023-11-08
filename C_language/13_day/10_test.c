#include <stdio.h>

const int a = 1;//.rodata段
int c = 6;//.data

int main(void)
{
	static int b = 0;//.data
	static int d;//.bss

	printf("&a = %p\n",&a);
	printf("&b = %p\n",&b);
	printf("&c = %p\n",&c);
	printf("&d = %p\n",&d);

	return 0;
}
