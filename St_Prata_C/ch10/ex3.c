#include <stdio.h>

void prarr(int, int, int [*][*]);

int main(void) {
	int n = 3, m = 3;
	int arr[n][m];

	for(int i = 0; i < n; i++)
		for(int k = 0; k < m; k++)
			arr[i][k] = i+k+1;
	prarr(n, m, arr);
	return (0);
}

void prarr(int n, int m, int arr[n][m]) {
	for(int i = 0; i < n; i++) {
		for(int k = 0; k < m; k++)
			printf("%i ", arr[i][k]);
		putchar('\n');
	}
}
