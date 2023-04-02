#include <stdio.h>
#define SI 3
#define ZE 5

void mult(int [SI][ZE]);

int main(void) {
	int arr[SI][ZE];

	for(int i = 0; i < SI; i++) 
		for(int k = 0; k < ZE; k++) 
			scanf("%i ", &arr[i][k]);
	mult(arr);
	return (0);
}

void mult(int arr[SI][ZE]) {
	putchar('\n');
	for(int i = 0; i < SI; i++) 
		for(int k = 0; k < ZE; k++) {
			printf("%i ", arr[i][k]);
			arr[i][k] *= 2;
		}
	putchar('\n');
	putchar('\n');
	for(int i = 0; i < SI; i++) 
		for(int k = 0; k < ZE; k++) 
			printf("%i ", arr[i][k]);
}
		
