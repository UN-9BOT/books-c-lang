#include <stdio.h>

#define SIZE 3

double foo(double *);

int main(void) {
	double arr[] = {7.1, 2.1, 3.1};
	printf("%.2lf", foo(arr));

	return (0);
}

double foo(double *arr) {
	double max = arr[0];
	double min = arr[0];

	for(int i = 1; i < SIZE; i++) {
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}
	return (max - min);
}
