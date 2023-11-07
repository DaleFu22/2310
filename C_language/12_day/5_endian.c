#include <stdio.h>

union s{
	short a;
	char b;
};

int main(void)
{
	union s x;
	x.a = 0x1234;

	printf("%p\n",&x.a);
	printf("%p\n",&x.b);
	if((char *)&x.a == &x.b)
	{
		if(x.b == 0x34)
		{
			printf("小端序\n");
		}
		else
		{
			printf("大端序\n");
		}
	}
	return 0;
}
