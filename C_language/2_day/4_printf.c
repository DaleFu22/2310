#include <stdio.h>

int main(void)
{
	int a=567;printf ( "%d\n",a); //567
	int b=255;printf("%x\n",b);       //ff
	int c=65;printf("%o\n",c);        //101
	int d=255;printf("%#x\n",d);      //ff
	int e=65;printf("%#o\n",e);       //101
	int f=567;printf("%u\n",f);       //567
	char g=65;printf("%c\n",g);       //A
	printf("%s\n","ABC");         //ABC
	float h=567.789;printf("%e\n",h); //5.677890e+02
	float i=567.789;printf("%f\n",i); // 567.789000
	float j=5676666.786669;printf("%g\n",j); // 567.789
	printf("%%\n");            //%

	return 0;
}

