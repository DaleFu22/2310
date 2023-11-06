#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stu{
	int age;
	char name[50];
	float score;
};

int main(void)
{
	struct stu *p;
	p = (struct stu *)malloc(sizeof(struct stu));
	(*p).age = 18;
	strcpy((*p).name,"赵四");
	(*p).score = 100;

	printf("%d\t%s\t%f\n",(*p).age,(*p).name,(*p).score);
	printf("%d\t%s\t%f\n",p->age,p->name,p->score);
	
	return 0;
}
