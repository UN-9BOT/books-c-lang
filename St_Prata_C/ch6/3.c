#include <stdio.h>

int main(void)
{
	for (int j = 1; j <= 6; j++)
	{
		for (int i = 70, k = 1; k <= j; i--, k++)
			printf("%c", i);
		printf("\n");
	}
	return (0);
}
		
