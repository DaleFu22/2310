#include <stdio.h>

typedef struct stu{
	int age;
	char name[50];
	float score;
}data,*pdata;//data == struct stu     pdata == struct stu *
//此时data和pdata是起的类型别名

struct student{
	int a;
	char b;
	long c;
}s1,s2;//s1和s2是变量名

//typedef的用法:typedef  [类型]  [别名]

int main(void)
{
	data s = {18,"张三",98};//struct stu s
	pdata ps = &s;
	printf("%d\t%s\t%f\n",s.age,s.name,s.score);
	printf("%d\t%s\t%f\n",ps->age,ps->name,ps->score);

	return 0;
}
