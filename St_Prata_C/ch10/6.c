#include <stdio.h>

#define SIZE 5

void swap(double *, double *);

int main(void) {
	double arr[] = {1, 2, 3, 4, 5};
	double arr2[SIZE];

	swap(arr, arr2);
	for(int i = 0; i < SIZE; i++) 
		printf("%lf ", arr2[i]);
	return (0);
}

void swap(double *arr, double *arr2) {
	
	for(int i = 0, k = SIZE - 1; i < SIZE; i++, k--) 
		arr2[k] = arr[i];
}
