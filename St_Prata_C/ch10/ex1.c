#include <stdio.h>

void read_arr(int [][3]);

int main(void) {
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}};
	read_arr(arr);
	return (0);
}


void read_arr(int arr[][3]) {
	for(int i = 0; i < 2; i++) {
		for(int k = 0; k < 3; k++) 
			printf("%2i", arr[i][k]);
		printf("\n");
	}
}

