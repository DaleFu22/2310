#include <stdio.h>

int main(void)
{
	char name[100];
	printf("请输入姓名:");
	gets(name);
	//scanf("%s",name);
	printf("%s\n",name);

	return 0;
}
