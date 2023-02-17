#include <stdio.h>

int main(void)
{
	int j, i;

	for (j = 9; j>0; j--)
	{
		for (i = 9; i >= j; i--)
		{
			printf("%i", i);
		}
		printf("\n");
	}
}
