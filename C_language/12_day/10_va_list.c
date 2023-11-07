#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#define MAXLINE 80

double sumup(const char *format, ...)
{
	va_list arg_ptr; //定义一个用来回溯堆栈变参的指针arg_ptr
	va_start(arg_ptr,format); //使arg_ptr指向固定参之后第一个变参

	int argnum = 0,i;
	char arg[MAXLINE];
	bzero(arg,MAXLINE);

	//提取自定义的格式控制符，并存放在arg[]中
	for(i = 0;format[i]!='\0';i++)
	{
		if(format[i]=='#')
		{
			arg[argnum] = format[++i];
			argnum++;
		}
	}
	double sum = 0;
	int arg_int;
	double arg_double;

	for(i = 0;arg[i]!= '\0';i++)
	{
		switch(arg[i])
		{
			case 'i':
			case 'c':
				arg_int = va_arg(arg_ptr,int);
				sum += arg_int;
				break;
			case 'f':
				arg_double = va_arg(arg_ptr,double);
				sum += arg_double;
				break;
			default:
				printf("format error...\n");
				exit(1);

		}
	}
	va_end(arg_ptr);
	/*使用va_end()来确保变参取完之后arg_ptr恢复到不可用的状态，避免下次不小心再次对arg_ptr进行引用导致系统段错误（Sagmentation Fault）*/
	return sum;
}


int main(void)
{
	int i=1;
	char c = 'B';
	double f = 0.618;

	/*模仿printf() 约定#i代表int #f代表double #c代表char*/
	printf("summary:%f\n",sumup("#i#c#f",i,c,f));

	return 0;
}

