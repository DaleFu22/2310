#include <stdio.h>
#include <stdlib.h>

struct s{
	int a;
};

struct n{
	int b;
	struct s *ps;
};

struct m{
	int c;
	struct n *pn;
};

int main(void)
{
	struct m *pm = NULL;
	pm = (struct m *)malloc(sizeof(struct m));
	pm->pn = (struct n *)malloc(sizeof(struct n));
	pm->pn->ps = (struct s *)malloc(sizeof(struct s));
	pm->c = 6;
	pm->pn->b = 7;
	pm->pn->ps->a = 8;
	printf("c = %d\n",pm->c);
	printf("b = %d\n",pm->pn->b);
	printf("a = %d\n",pm->pn->ps->a);

	return 0;
}
