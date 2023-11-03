#include <stdio.h>
#include <string.h>

void sort_string(char **p,int n);

int main(void)
{
	char * name[]= {"red","green","apple","blue"};
	int i;
	sort_string(name,4);
	for(i = 0;i < 4;i++)
	{
		printf("%s\t",name[i]);
	}
	puts("");

	return 0;
}

void sort_string(char **p,int n)
{
	char *temp;
	int i,j;
	for(i = 0;i < n-1;i++)
	{
		for(j = 0;j < n-1-i;j++)
		{
			if(strcmp(p[j],p[j+1]) > 0)
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
}
