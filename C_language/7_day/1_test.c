#include <stdio.h>

int main(void)
{
	int n = 0,i;
	int count[5] = {0};
	char buf[BUFSIZ];
	while((buf[n++] = getchar()) != '\n');
	
	for(i = 0;i < n;i++)
	{
		if(buf[i] >= 'A' && buf[i] <= 'Z')
		{
			count[0]++;
		}
		else if(buf[i] >= 'a' && buf[i] <= 'z')
		{
			count[1]++;
		}
		else if(buf[i] >= '0' && buf[i] <= '9')
		{
			count[2]++;
		}
		else if(buf[i] == ' ')
		{
			count[3]++;
		}
		else
		{
			count[4]++;
		}
	}
	printf("大写字母个数:%d\n",count[0]);
	printf("小写字母个数:%d\n",count[1]);
	printf("数字字符个数:%d\n",count[2]);
	printf("空格字符个数:%d\n",count[3]);
	printf("其他字符个数:%d\n",count[4]-1);

	return 0;
}


