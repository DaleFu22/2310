#include <stdio.h>
#include <string.h>

struct student{
		char name[50];
		int age;
		char sex;
		float score;
};

int main(void)
{
	struct student stu1,stu2;
#if 0
	//不允许对整个结构体进行赋值操作
	stu1 = {"dale",18,'m',99};
#endif
//	stu1.name = "dale";//违法操做
	strcpy(stu1.name,"dale");
	stu1.age = 18;
	stu1.sex = 'm';
	stu1.score = 99.9;

	stu2 = stu1;//相同类型的结构体的不同变量之间可以直接进行赋值操作

	printf("%s\t%d\t%c\t%f\n",stu1.name,stu1.age,stu1.sex,stu1.score);
	printf("%s\t%d\t%c\t%f\n",stu2.name,stu2.age,stu2.sex,stu2.score);

	return 0;
}
