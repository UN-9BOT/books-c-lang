#include <stdio.h>

#define SIZE 5

int max_i(double []);
int main(void) {
	double arr[] = {1, 2, 3, 4, 5};
	printf("%i", max_i(arr));
	return (0);
}

int max_i(double arr[]) {
	int max_num = arr[0];
	int index = 0;
	for(int i = 1; i < SIZE; i++)
		if(arr[i] > max_num)
			index = i;
	return index;
}

