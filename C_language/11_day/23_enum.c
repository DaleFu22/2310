#include <stdio.h>

enum std{
	a,
	b,
	c,
	d,
	e
};
//枚举可以理解成就是整型的数据取别名
int main(void)
{
//	enum std s = {1,3,2};//不合法
	enum std s;
#if 0
	//不允许赋值操作
	s.a = 666;
	s.b = 777;
	s.c = 888;
#endif
	//枚举体默认的成员值的大小就是从0开始依次往下递增。
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);

	//枚举体的大小与成员个数无关
	printf("sizeof(s) = %lu\n",sizeof(s));

	return 0;
}
