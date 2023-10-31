#include <string.h>
#include <stdio.h>

void main(void)
{
  	char destination[25];
	char blank[] = " ", c[]= "C++",turbo[] = "Turbo";
	strcpy(destination, turbo);
	strcat(destination, blank);
	strcat(destination, c);
	printf("%s\n", destination);
}

