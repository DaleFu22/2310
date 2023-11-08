#include <stdio.h>

struct stu{
	int age;
	char name[50];
	float score;
};

//typedef的用法:typedef  [类型]  [别名]
typedef struct stu	datatype;

int main(void)
{
	datatype s = {18,"张三",98};
	printf("%d\t%s\t%f\n",s.age,s.name,s.score);

	return 0;
}
