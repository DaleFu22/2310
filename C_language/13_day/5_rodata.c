#include <stdio.h>

int main(void)
{
	char *p = "hello";
	char s[] = "hello";

//	*(p+1) = 'n';//导致段错误，因为访问非法内存
	p = "world";//改变了p的指向，没有改变指向的内存单元的内容所以不会报错

	*(s+1) = 'n';

	printf("%s\n",p);
	printf("%s\n",s);

	printf("p = %p\n",p);
	printf("&p = %p\n",&p);

	printf("s = %p\n",s);//s = &s[0]
	printf("&s = %p\n",&s);//&s是指向整个数组，&s+1

	return 0;
}
