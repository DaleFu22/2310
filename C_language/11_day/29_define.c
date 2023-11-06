#include <stdio.h>

//宏定义就是简单的替换
#define SQR(x) x * x
#define SQR_NEW(x)	((x) * (x))

int main(void)
{
	printf("%d\n",SQR(4));
	printf("%d\n",SQR(4+1));//SQR(4+1) ==>4+1*4+1 = 9
	printf("%d\n",SQR_NEW(4+1));//SQR(4+1) ==>(4+1)*(4+1) = 25

	return 0;
}
