#include <stdio.h>

int main(void)
{
	float weight, value;

	printf("Platin?\n");
	scanf("%f", &weight);
	value = 1700.0 * weight * 14.5833;
	printf("$%2.f\n", value);

	return (0);
}
