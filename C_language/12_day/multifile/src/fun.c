#include "../include/fun.h"


void Print_Struct(void)
{
	struct stu s = {18,"张三",99.9};
	printf("%d\t%s\t%f\n",s.age,s.name,s.score);
}

