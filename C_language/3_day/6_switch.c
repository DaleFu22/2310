#include<stdio.h>

int main(void)
{
	int x = 1;
	int y = 2;
	int z = 3;
	switch(x > 0)
	{
		case 1 :
			switch (y > 0)
			{
				case 1:
					printf("?");
					break;
				case 2:
					printf("%%");
					break;
			}
		case 0:
			switch (z == 3)
			{
				case 0:
					printf("+");
					break;
				case 1:
					printf("#");
					break;
				case 2:
					printf("$");
					break;
			}
		default:
			printf("&");
	}
	printf("\n");

	return 0;
}

