#include <stdio.h>

int main(void)
{
	int r;
    float area;
	float pi = 3.14;
	for(r = 1;r < 10;r++)
	{
		area = pi*r*r;
		if(area > 100)
			break;
		printf("area = %f\n",area);
	}
	return 0;
}
