#include <stdio.h>
#define SIZE 5
void copy_arr(double [], double [], int);
void copy_ptr(double [], double [], int);
void copy_ptrs(double [], double [], double *);

int main(void) {
	double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[SIZE];
	double target2[SIZE];
	double target3[SIZE];

	copy_arr(target1, source, SIZE);
	copy_ptr(target2, source, SIZE);
	copy_ptrs(target3, source, source + SIZE);
	
	for(int i = 0; i < SIZE; i++) {
		printf("%.2lf %.2lf %.2lf\n", target1[i], target2[i], target3[i]); 
	}
	return (0);
}


void copy_arr(double target[], double source[], int n) {
	for(int i = 0; i < n; i++) 
		target[i] = source[i];
}

void copy_ptr(double target[], double source[], int n) {
	for(int i = 0; i < n; i++) 
		*(target+i) = *(source+i);
}

void copy_ptrs(double target[], double source[], double *pe) {
	int i = 0;
	double *k = source;
	for(; k < pe; k++, i++) 
		*(target+i) = *(source+i);
}
	
