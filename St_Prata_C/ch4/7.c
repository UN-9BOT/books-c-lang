#include <stdio.h>
#include <float.h>

int main (void)
{
	double num1 = 1.0 / 3.0;
	float num2 = 1.0 / 3.0;

	printf("%.4lf\n", num1);
	printf("%.12lf\n", num1);
	printf("%.16lf\n", num1);
	printf("%.4f\n", num2);
	printf("%.12f\n", num2);
	printf("%.16f\n", num2);
	printf("%i%i\n", FLT_DIG, DBL_DIG);
	printf("%.16lf\n", 1.0/0.3);
	return (0);
}
