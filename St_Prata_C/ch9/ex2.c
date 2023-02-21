#include <stdio.h>

int main(void) {
	int n = 2;
	int m = 1;
	int *pn = &n;
	int *pm = &m;
	int temp = *pn;

	*pn = *pm;
	*pm = temp;
	printf("%i %i", n, m);
	return (0);
}


