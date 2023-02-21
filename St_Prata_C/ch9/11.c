#include <stdio.h>

void fib(int x);
int fib2(int x);

int main(void) {
	printf("%i", fib2(10));
	return (0);
}

void fib(int x) {
	int l = 1;
	int y = 1;
	int sum;

	printf("%i %i ", l, y);
	for(; x > 2; x--) {
		sum = l + y;
		l = y;
		y = sum;
		printf("%i ", sum);
	}
}

int fib2(int x) {
	return ((x == 1) || (x == 2)) ? (1): (fib2(x-1) + fib2(x-2));
}
