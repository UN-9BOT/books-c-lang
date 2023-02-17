#include <stdio.h>

int main(void)
{
	int k, j, h, i;

	for (k = 1, i = 4; i >= 0; i--, k += 2)
	{
		for (h = i; h > 0; h--)
			printf(" ");
		for (; k > 0; k--)
			printf("%c", k+64);
		for (j = i; j > 0; j--)
			printf(" ");
		printf("\n");
	}
	return (0);
}
