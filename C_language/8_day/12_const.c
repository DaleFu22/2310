#include <stdio.h>

int main(void)
{
	int a = 6;
	int b = 666;
#if 0
	const int *p = &a;//const修饰的是*p所以*p不能改变，p可以变

//	*p = 9;//违法操作
	p = &b;
	printf("%d\n",*p);
#endif
#if 0
	int const *p = &a;//const修饰的是*p所以*p不能改变,p可以变
//	*p = 9;//违法操作
	p = &b;
	printf("%d\n",*p);
#endif
#if 0
	int *const p = &a;//const修饰p，所以p不能改变,*p可以变
	*p = 9;
//	p = &b;//违法操作
	printf("%d\n",*p);
#endif
	int const*const p = &a;//const修饰了*p同时修饰了p，此时*p和p都不能改变
//	*p = 9;//违法操作
//	p = &b;//违法操作
	printf("%d\n",*p);

	return 0;
}
