#include <stdio.h>
#include <time.h>
#define SIZE 10

int main(void) {
	long long sol;
	int arr[SIZE];
	
	for(int i = 0; i < SIZE; i++) {
		sol = (long long) time(0);
		arr[i] = sol % 11;
		printf("%i ", arr[i]);
	}
	return(0);
}
