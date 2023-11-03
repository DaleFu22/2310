#include <stdio.h>

int main(void)
{
//	char *s1 = "hello";//被连接字符串只能定义成字符数组，不能定义成该形式
	char s1[20] = "hello";
	char *s2 = "world";

	char *p = s1,*q = s2;
	while(*p != '\0')
	{
		p++;
	}

	while(*q != '\0')
	{
		*p = *q;
		p++;
		q++;
	}
	printf("%s\n",s1);

	return 0;
}
