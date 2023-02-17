#include <stdio.h>

int main (void)
{
	int k, j;
	
	scanf("%i%i", &k, &j);
	for (int i = k; i <= j; i++)
		printf("%6i | %6i | %6i\n", i, i*i, i*i*i);
	return (0);
}
		
