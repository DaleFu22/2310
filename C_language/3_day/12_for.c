#include <stdio.h>

int main(void)
{
#if 0
	for(i = 0;i < 101;i++)
	{
		sum += i;
	}
#endif
#if 0
	for(;i < 101;i++)
	{
		sum += i;
	}
#endif
#if 0
	for(i = 0;;i++)
	{
		if(i > 100)
			break;
		sum += i;
	}
#endif
#if 0
	for(i = 0;i < 101;)
	{
		sum += i;
		i++;
	}
#endif
#if 0
	for(;;i++)
	{
		if(i > 100)
			break;
		sum += i;
	}
#endif
#if 0
	for(;;)
	{
		if(i > 100)
			break;
		sum += i;
		i++;
	}
#endif
	for(int i = 0,sum = 0,j = 0,z = 0;i < 101,j < 100,z > 100;i++)
	{
		sum += i;
		if(i == 100)
			printf("sum = %d\n",sum);
	}

	return 0;
}
