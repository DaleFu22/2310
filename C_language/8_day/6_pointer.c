#include <stdio.h>

int main(void)
{
	char *s = "hello";
//	*s = 'w';//hello字符串存放在只读数据区，不允许进行修改，这样会导致段错误
	s = "old";//可以改变指针s的指向，所以该语句没问题

	printf("%s\n",s);
	printf("%p\n",s);
	printf("%p\n",&s);

	return 0;
}
