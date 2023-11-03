#include <stdio.h>

void Print_Array(char *p);

int main(void)
{
	char *s[3] = {"how","are","you"};

	Print_Array(s[0]);

	return 0;
}


void Print_Array(char *p)
{
	printf("%s\n",p);
}
