#include <stdio.h>

double garmony(double x, double y);
int main(void) {
	printf("%lf", garmony(4.5, 5.5));
	return (0);
}

double garmony(double x, double y) {
	return (2 / (1 / x + 1 / y));
}
