#include <stdio.h>

//结构体的定义
struct student{
		int age;
		char name[20];
		float score;
};


int main(void)
{
	//初始化，必须按照结构体成员顺序依次进行初始化
	struct student stu1 = {18,"dale",99.8};//结构体类型：struct+标签名
	struct student stu2 = {.name = "tom",.age = 19,.score = 100.5};//指定成员初始化

	return 0;
}
