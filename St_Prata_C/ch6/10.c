#include <stdio.h>

int main (void)
{
	int num1, num2, sum;

	scanf("%i%i", &num1, &num2);
	for (int j = num1; j <= num2; j++)
		sum += j*j;
	printf("%i", sum);
	return (0);
}
