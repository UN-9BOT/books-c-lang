#include <stdio.h>
#define GAL 3.785
#define MIL 1.609

int main (void)
{
	float miles, gall;

	scanf("%f%f", &miles, &gall);
	printf("%.1f\n", miles / gall);
	printf("%f\n", (miles * MIL) / (gall * GAL) * 100);

	return (0);
}
