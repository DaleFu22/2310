#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str[12] = {"junjie","zijun","qianxu","lesan","zhoujian","dengcheng","weiliang","wenjuan","zhenguo","wenjie","renkang","liming"};
	char *temp;

	int i,j;
	for(i = 0;i < 11;i++)
	{
		for(j = i+1;j < 12;j++)
		{
			if(strcmp(str[i],str[j]) < 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}

	for(i = 0;i < 12;i++)
	{
		printf("%s\n",str[i]);
	}

	return 0;
}
