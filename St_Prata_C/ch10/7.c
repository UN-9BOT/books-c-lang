#include <stdio.h>

#define SIZE 2

void copy_ptr(double [][SIZE], double [][SIZE], int);

int main(void) {
	double arr[SIZE][SIZE] = {{1.2, 2.2}, {3.3, 4.4}};
	double arr2[SIZE][SIZE];

	copy_ptr(arr2, arr, SIZE);
	for(int i = 0; i < SIZE; i++)
		for(int k = 0; k < SIZE; k++)
			printf("%.1lf ", arr2[i][k]);
	return (0);
}

void copy_ptr(double target[][SIZE], double source[][SIZE], int n) {
	for(int i = 0; i < n; i++) 
		for(int k = 0; k < n; k++)
			target[i][k] = source[i][k];
}


