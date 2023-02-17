#include <stdio.h>

float calc(float num1, float num2)
{
	return ((num1-num2)/(num1*num2));
}

int main(void)
{
	float num1, num2;

	while (scanf("%f%f", &num1, &num2))
		printf("%.2f\n", calc(num1, num2) );
	return (0);
}

