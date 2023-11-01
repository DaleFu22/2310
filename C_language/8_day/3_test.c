#include <stdio.h>

int main(void)
{
	int a[6] = {1,3,5,7,9,0};

	int *p,*q,temp,i;
	p = a;//p指向数组的开头
	q = &a[5];//q指向数组的末尾

	while(p < q)
	{
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}

	for(i = 0;i < 6;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");

	return 0;
}
