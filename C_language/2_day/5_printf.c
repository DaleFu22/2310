#include <stdio.h>

int main(void)
{
	int a = 666;
	float b = 3.1415926535;
	char *s = "hello world";
	printf("%8d\n",a);
	printf("%-8d\n",a);
	printf("%08d\n",a);
	printf("%.4f\n",b);
	printf("%.3s\n",s);

	printf("=================================================\n");
	{
		int a=1234;
		float f=123.456;
		char ch='a';
		printf("%8d,%2d\n",a,a);
		printf("%f,%8f,%8.1f,%.2f\n",f,f,f,f);
		printf("%3c\n",ch);
	}
	printf("=================================================\n");
	{
		static char a[]="Hello,world!";
		printf("%s\n%15s\n%10.5s\n%2.5s\n%.3s\n",a,a,a,a,a);
	}
	printf("=================================================\n");
	{
		int a=1234;
		float f=123.456; 
		printf("%08d\n",a); 
		printf("%010.2f\n",f); //0000123.46
		printf("%0+8d\n",a);    
		printf("%0+10.2f\n",f); 

	}

	return 0;
}
