#include <stdio.h>

void main(void)
{
	int i = 10;
	printf("张亮亮\n");
	goto A;
	printf("王高龙\n");
	printf("叶永耀\n");
	printf("徐康\n");
	printf("黄鑫旺\n");
A:{
	printf("i = %d\n",i);
	i--;
	if(i < 0)
		return;
	else
		goto A;
  }

	return;
}

