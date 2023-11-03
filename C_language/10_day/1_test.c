#include <stdio.h>

int strtoupper(char * s);

int main() 
{
	char str[] = "H ow23Are 45Y ou?";
	int n;

	n = strtoupper(str);

	printf("n=%d\n", n);
	puts(str);

	return 0;
}

int strtoupper(char * s) {
	int r = 0;

	while (*s != '\0') {
		if (*s <= 'z' && *s >= 'a') {
			r++;
			*s = *s - 32;
		}
		s++;
	}

	return r;
}

