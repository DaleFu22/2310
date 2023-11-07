#include <stdio.h>

struct NODE
{
	int k;
	struct NODE *link;
};

int main(void)
{
	struct NODE m[5],*p = m,*q = m+4;
	int i = 0;
	while(p != q)
	{
		p->k = ++i;
		p++;
		q->k = i++;
		q--;
	}
	q->k = i;
	for(i = 0;i < 5;i++)
	{
		printf("%d\n",m[i].k);
	}

	return 0;
}
