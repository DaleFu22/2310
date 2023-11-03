#include <stdio.h>

void Print_Array(char *p[32768]);
//void Print_Array(char *p[]);

int main(void)
{
	char *s[3] = {"how","are","you"};

	Print_Array(s);

	return 0;
}


//void Print_Array(char *p[])//char *p[] == char **p
void Print_Array(char *p[32768])//char *p[32768] == char **p
{
	printf("%s\n",*p);
}
