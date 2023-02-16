#include <stdio.h>

int main(void)
{
	int num, n;

	scanf("%i", &num);
	n = num + 10;
	num--;
	while (num++ < n)
		printf("%i\t", num);
	return (0);
}

