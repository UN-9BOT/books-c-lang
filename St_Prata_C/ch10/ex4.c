#include <stdio.h>

void foo(int, int [*]);

int main(void) {
	int n = 1;
	int arr[n];
	arr[0] = 65;
	foo(n, arr);
}

void foo(int n, int arr[n]) {
	printf("%i", arr[n-1]);
}
