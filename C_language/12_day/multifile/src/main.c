#include "../include/caculat.h"
#include "../include/fun.h"

int main(void)
{
	int a = 9,b = 3;
	Print_Struct();
	printf("a+b = %d\n",add_num(a,b));
	printf("a-b = %d\n",sub_num(a,b));
	printf("a*b = %d\n",mul_num(a,b));
	printf("a/b = %d\n",div_num(a,b));

	return 0;
}
