#include <stdio.h>

int main(void)
{
	for (int i = 1, j = 65; i <= 6; i++)
	{
		for (int k = 1; k <= i; k++, j++)
			printf("%c", j);
		printf("\n");
	}
	return (0);
}
