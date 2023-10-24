#include <stdio.h>

int main(void)
{
	int ret,yy,mm,dd;
	int a,b;
#if 0
	ret = scanf("%4d%2d%2d",&yy,&mm,&dd);
	printf("ret = %d\n",ret);
	printf("yy = %d\n",yy);
	printf("mm = %d\n",mm);
	printf("dd = %d\n",dd);
#endif
	scanf("%2d%*3d%2d",&a,&b);
	printf("a = %d\tb = %d\n",a,b);
	return 0;
}
