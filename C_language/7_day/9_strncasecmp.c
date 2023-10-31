#include <stdio.h>
#include <string.h>
#include <strings.h>

#define QUIT	"quit"

int main(void)
{
	int i = 0;
	char buf[BUFSIZ],c;
	bzero(buf,BUFSIZ);

	while(1)
	{
		bzero(buf,BUFSIZ);
		i = 0;
		printf("请输入指令:");
		while((c = getchar()) != '\n')
		{
			buf[i++] = c;
		}
		if(strncasecmp(buf,QUIT,4) == 0)
		{
			printf("Exiting....\n");
			break;
		}
	}
}
