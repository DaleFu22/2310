#include <stdio.h>

int main(void)
{
	//输入字符串
	int i = 0,j;
	char buf[BUFSIZ] = {0};
	char c,temp;
	while((c = getchar()) != '\n')
	{
		buf[i++] = c;
	}
	for(j = 0;j < i/2;j++)
	{
		temp = buf[j];
		buf[j] = buf[i-1-j];
		buf[i-1-j] = temp;
	}

	printf("%s\n",buf);

	return 0;
}
