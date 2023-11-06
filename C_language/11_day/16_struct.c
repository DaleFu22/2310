#include <stdio.h>

struct stu{
	int age;
	char name[50];
	float score;
};

int main(void)
{
	struct stu s = {18,"张三",99.9};
	struct stu *p = &s;

	printf("%d\t%s\t%f\n",(*p).age,(*p).name,(*p).score);
	printf("%d\t%s\t%f\n",p->age,p->name,p->score);
	
	return 0;
}
