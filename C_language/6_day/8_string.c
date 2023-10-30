#include <stdio.h>

int main(void)
{
	int i;
	//定义字符数组时，要考虑字符串结束标志\0，所以hello虽然5个字符但是定义时应该是6个字符大小
	//1、逐个字符进行赋值
	char s1[6] = {'h','e','l','l','o'};
	for(i = 0;i < 5;i++)
	{
		printf("%c",s1[i]);
	}
	puts("");
	printf("%s\n",s1);
	printf("sizeof(s1) = %lu\n",sizeof(s1));

	//2、直接进行赋值
	char s2[6] = {"hello"};
	for(i = 0;i < 5;i++)
	{
		printf("%c",s2[i]);
	}
	puts("");
	printf("%s\n",s2);
	printf("sizeof(s2) = %lu\n",sizeof(s2));

	//3、直接进行赋值
	char s3[6] = "hello";
	for(i = 0;i < 5;i++)
	{
		printf("%c",s3[i]);
	}
	puts("");
	printf("%s\n",s3);
	printf("sizeof(s3) = %lu\n",sizeof(s3));

	//4、不指定长度进行初始化
	char s4[] = "hello";
	for(i = 0;i < 5;i++)
	{
		printf("%c",s4[i]);
	}
	puts("");
	printf("%s\n",s4);
	printf("sizeof(s4) = %lu\n",sizeof(s4));



	return 0;
}
