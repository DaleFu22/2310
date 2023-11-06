#include <stdio.h>

union s{
	int a;
	char b;
	float c;
};
//联合体所有成员公用同一块内存
int main(void)
{
	//不允许对联合体进行完全初始化
//	union s s1 = {1,'m',99.9};
	union s s1 = {65};
	printf("s1.a = %d\n",s1.a);
	printf("s1.b = %c\n",s1.b);
	printf("s1.c = %f\n",s1.c);

	union s s2 = {.a = 65,.b = 'B'};
	printf("s1.a = %d\n",s2.a);
	printf("s1.b = %c\n",s2.b);
	printf("s1.c = %f\n",s2.c);

	printf("sizeof(s1) = %lu\n",sizeof(s1));

	return 0;
}
