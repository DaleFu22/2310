#include <stdio.h>

enum std{
	a = 666,
	b,
	c,
	d,
	e
};
//枚举可以理解成就是整型的数据取别名
int main(void)
{
	enum std s;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);

	//枚举体的大小与成员个数无关
	printf("sizeof(s) = %lu\n",sizeof(s));

	return 0;
}
