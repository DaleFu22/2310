#include <stdio.h>

int  main()
{   
	int a[]={5,8,7,6,2,7,3};
	int y,*p=&a[1];
	y=(*--p)++;
	printf("%d\n",y);
	printf("%d\n",a[0]);
} 

