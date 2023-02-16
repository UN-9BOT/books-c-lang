#include <stdio.h>

void temperatures(double num);

int main(void)
{
	double num;
	int res;

	res = scanf("%lf", &num);
	while (res == 1)
	{
		temperatures(num);
		res = scanf("%lf", &num);
	}
	return (0);
}

void temperatures(double num)
{
	const char FAR = 'F';
	const char CEL = 'C';
	const char KEL = 'K';
	double cel;
	const double c_kel = 273.16;

	printf("%.2lf %c\n", num, FAR);
	cel = 5.0 / 9.0 * num;
	printf("%.2lf %c\n", cel, CEL);
	printf("%.2lf %c\n", cel + c_kel, KEL);
}
