#include <stdio.h>

//int main(int argc,char *argv[])
int main(int argc,const char **argv)
{
	int i;
	for(i = 0;i < argc;i++)
	{
		printf("%s\n",argv[i]);
	}

	*(argv[1]+1) = 'w';
	printf("%s\n",argv[1]);

	return 0;
}
