#include <stdio.h>

int judge_endian(void);

int main(void)
{
	int ret = -1;
	ret = judge_endian();
	if(ret == 1)
	{
		printf("小端序\n");
	}
	else
	{
		printf("大端序\n");
	}

	return 0;
}

int judge_endian(void)
{
	short a = 0x1234;
	char *b = (char *)&a;

	//小端序返回1，大端序返回0
	if(*b == 0x34)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
