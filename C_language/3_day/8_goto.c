#include <stdio.h>

int main(void)
{
	int i = 100,sum = 0;
A:{
	  sum += i;//sum = sum+i;
	  if(i < 1)
	  {
		  printf("sum = %d\n",sum);
		  return 0;
	  }
	  i--;
  }
  goto A;

	return 0;
}
