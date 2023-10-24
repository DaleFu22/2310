#include <stdio.h>

int main(void)
{
	int x;
	char ch;
	scanf("%d",&x);
	//getchar();
	//scanf(" %c",&ch);
	scanf("%*c%c",&ch);
	printf("x=%d,ch=%d\n",x,ch);

}
