#include <stdio.h>

struct stu{
	int age;
	char name[50];
	float score;
};

int main(void)
{
	struct stu s[3];
	int i;
	for(i = 0;i < 3;i++)
	{
		scanf("%d%s%f",&s[i].age,s[i].name,&s[i].score);
	}

	for(i = 0;i < 3;i++)
	{
		printf("%d\t%s\t%f\n",s[i].age,s[i].name,s[i].score);
	}

	printf("sizeof(struct stu) = %lu\n",sizeof(struct stu));
	printf("sizeof(s) = %lu\n",sizeof(s));

	return 0;
}
