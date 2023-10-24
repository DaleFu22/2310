#include <stdio.h>
#include <math.h>

int main(void)
{
	float a,b,c,s,area;
	printf("请输入三条边长:");
	scanf("%f%f%f",&a,&b,&c);
	s = 1/2.0*(a+b+c);
	area = sqrt(s*(s-a)*(s-b)*(s-c));

	printf("面积为:%f\n",area);

	return 0;
}
