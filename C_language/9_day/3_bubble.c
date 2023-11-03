#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[][50] = {"How","are","You","and","OK"};
	char temp[50];

	int i,j;
	for(i = 0;i < 5-1;i++)
	{
		for(j = 0;j < 5-1-i;j++)
		{
			if(strcmp(str[j],str[j+1]) > 0)
			{
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	}

	for(i = 0;i < 5;i++)
	{
		printf("%s\t",str[i]);
	}
	puts("");

	return 0;
}
