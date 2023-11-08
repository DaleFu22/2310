#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int main()
{
	char* p=malloc(0);
	printf("p = %p \r\n",p);
	strcpy(p,"abc");	
	printf("malloc_usable_size(p) = %ld \r\n",malloc_usable_size(p));
	free(p);
	p = NULL;
	return 0;
}

