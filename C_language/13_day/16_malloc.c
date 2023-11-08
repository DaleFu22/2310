#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
		int age;
		char name[50];
		float score;
};

int main(void)
{
	struct student *p;
//	p = malloc(60);
	p = (struct student *)malloc(sizeof(struct student));

	p->age = 18;
//	(*p).age = 18;
	strcpy(p->name,"dale");
	p->score = 99.9;

	printf("%d\t%s\t%f\n",p->age,p->name,p->score);

	free(p);
	p = NULL;//防止指针p变成野指针

	return 0;
}
