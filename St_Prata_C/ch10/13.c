#include <stdio.h>

void scarr(int n, int m, double [n][m]);
double srarr(int, double *);
double srall(int n, int m, double [n][m]);
double upper(int n, int m, double [n][m]);
void prres(double, int); // custom print 

int main(void) {
	int n, m;

	scanf("%i %i", &n, &m);
	double arr[n][m];
	scarr(n, m, arr); // scan value in all arr
	for(int k = 0; k < n; k++)
		prres(srarr(m, *(arr+k)), 10+k); // mean nested arr
	prres(srall(n, m, arr), 1); // mean all
	prres(upper(n, m, arr), 2); // upper in all
	return (0);
}


void scarr(int n, int m, double arr[n][m]) {
	for(int i = 0; i < n; i++) {
		for(int k = 0; k < m; k++) {
			arr[i][k] = i*1.5+k*1.5*n*1.5*1.5*m+0.1*i*k;
			// printf("%.2lf\t", arr[i][k]);
		}
		// printf("\n\n");
	}

}


double srarr(int m, double *arr) {
	double total = 0.0;

	for(int k = 0; k < m; k++)
		total += arr[k];
	return (total / m);
}


double srall(int n, int m, double arr[n][m]) {
	double total = 0.0;

	for(int i = 0; i < n; i++)
		for(int k = 0; k < m; k++)
			total += arr[i][k];
	return (total / (n*m));
}


double upper(int n, int m, double arr[n][m]) {
	double max = arr[0][0];

	for(int i = 0; i < n; i++)
		for(int k = 0; k < m; k++) 
			if(arr[i][k] > max) 
				max = arr[i][k];
	return (max);	
}


void prres(double n, int f) {

	if(f >= 10)
			printf("Среднее значение для %i массива: %.2lf\n", f-9, n);
	else {	
		switch (f) {
			case (1):
				printf("Среднее значение для всех %.2lf\n", n);
				break;
			case (2):
				printf("Наибольшее значение: %.2lf\n", n);
		}
	}
}


