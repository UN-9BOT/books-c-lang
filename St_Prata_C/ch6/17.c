#include <stdio.h>

int main(void)
{
	int chaki = 1000000;
	int year =0;

	for (; chaki > 0; year++)
	{
		chaki += chaki * 0.08;
		chaki -= 100000;
		printf("%i\n", chaki);
	}
	printf("%i", year);

	return (0);
}
