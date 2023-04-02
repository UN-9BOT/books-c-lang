#include <stdio.h>

#define SIZE 3

void sum_arr(int, int *, int *, int *);

int main(void) {
	int arr1[SIZE] = {1, 2, 3};
	int arr2[SIZE] = {2, 3, 4};
	int arr3[SIZE];

	sum_arr(SIZE, arr1, arr2, arr3);
	return (0);
}

void sum_arr(int n, int *a1, int *a2, int *a3) {
	for(int i = 0; i < n; i++) {
		a3[i] = a1[i] + a2[i];
		printf("%i ", a3[i]);
	}
}
