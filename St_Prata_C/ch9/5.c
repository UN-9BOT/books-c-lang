#include <stdio.h>

void larger_of(double *x, double *y);

int main(void) {
	double x = 3.5, y = 3.4;
	larger_of(&x, &y);
	printf("%lf %lf\n", x, y);

	return (0);
}

void larger_of(double *x, double *y) {
	(*x >= *y) ? (*y = *x): (*x = *y);
}
