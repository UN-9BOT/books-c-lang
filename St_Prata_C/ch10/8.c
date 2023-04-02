#include <stdio.h>

#define SIZE 7

void copy_arr(double [], double [], int);

int main(void) {
	double source[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target[3];

	copy_arr(target, source+2, SIZE-2);
	for(int i = 0; i < 3; i++)
		printf("%.1lf ", target[i]);
	return (0);
}

void copy_arr(double target[], double source[], int n) {
	for(int i = 0; i < n; i++) 
		target[i] = source[i];
}

