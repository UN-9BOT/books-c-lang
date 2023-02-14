#include <stdio.h>

int main(void)
{
	int n, m, o;

	scanf("%i%i%i", &m, &n, &o);
	printf("%.*i", m+n, o);
	return (0);
}
