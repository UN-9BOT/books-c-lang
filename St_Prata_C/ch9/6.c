#include <stdio.h>

void foo(double *x, double *y, double *z);

int main(void) {
	double x = 433.23, y = 229.22, z =  55.0;
	foo(&x, &y, &z);
	printf("%lf %lf %lf", x, y, z);

	return (0);
}

void foo(double *x, double *y, double *z) {
	double min = *x;
	double max = *x;

	if(min > *y)
		min = *y;
	if(min > *z)
		min = *z;
	if(max < *y)
		max = *y;
	if(max < *z)
		max = *z;
	if((max == *x) && (min == *y))
		(*y = *z);
	if((max == *y) && (min == *z))
		(*y = *x);
	if((max == *y) && (min == *x))
		(*y = *z);
	if((max == *z) && (min == *y))
		(*y = *x);

	*x = min;
	*z = max;
}
