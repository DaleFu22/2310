#include <stdio.h>
#include <math.h>

int main(void)
{
	float a,b,c,x1,x2;
	printf("请输入三个数:");
	scanf("%f%f%f",&a,&b,&c);
	
	if((b*b-4*a*c) >= 0)
	{
		x1 = ((-b)+sqrt(b*b-4*a*c))/(2*a);
		x2 = ((-b)-sqrt(b*b-4*a*c))/(2*a);
		printf("x1 = %f\tx2 = %f\n",x1,x2);
	}
	else
	{
		printf("该函数无解\n");
	}


	return 0;
}
