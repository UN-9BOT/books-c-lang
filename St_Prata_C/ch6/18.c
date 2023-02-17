#include <stdio.h>

int main(void)
{
	int rob = 5;

	for (int week = 1; rob <= 150; week++)
	{
		rob -= week;
		rob *= 2;
		printf("%i - week, %i - rob\n", week, rob);
	}

	return (0);
}
