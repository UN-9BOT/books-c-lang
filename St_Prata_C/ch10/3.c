#include <stdio.h>

#define SIZE 3

int max(int, int []);

int main(void) {
	int arr[] = {2, 33, 4};
	printf("%i", max(SIZE, arr));
	return (0);
}

int max(int n, int arr[]) {
	int max_num = arr[0];
	for(int i = 1; i < n; i++) 
		if(arr[i] > max_num)
			max_num = arr[i];
		else continue;
	return max_num;	
}

