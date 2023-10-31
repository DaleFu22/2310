#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "ABC";
	char s2[] = "AcC";

	int ret;
	ret = strcmp(s2,s1);
	printf("ret = %d\n",ret);

	return 0;
}
