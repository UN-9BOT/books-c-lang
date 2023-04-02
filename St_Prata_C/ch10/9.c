#include <stdio.h>

void copy(int n, int m, double [n][m], double [n][m]);
void prarr(int n, int m, double [n][m]);

int main(void) {
	int n = 3, m = 4;
	double arr1[n][m], arr2[n][m];
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			arr1[i][j] = i + j + 0.1*(i+j);
	copy(n, m, arr1, arr2);
	prarr(n, m, arr2);
	
	return (0);
}

void copy(int n, int m, double arr1[n][m], double arr2[n][m]) {
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			arr2[i][j] = arr1[i][j];
}

void prarr(int n, int m, double arr[n][m]) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			printf("%.2lf\t", arr[i][j]);
		printf("\n");
	}
}

