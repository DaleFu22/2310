#include <stdio.h>

int main(void)
{
	int a,b,c,num = 100;
	while(num++ < 999)
	{
		a = num%10;//个位
		b = num/10%10;//十位
		//b = num%100/10;//十位
		c = num/100;
		if(a*a*a+b*b*b+c*c*c == num)
		{
			printf("%d\n",num);
		}
	}

	return 0;
}
