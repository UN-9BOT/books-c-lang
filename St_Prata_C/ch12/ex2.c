#include <stdio.h>
#include <stdlib.h>

int **alloc(int, int);
void pprint(int **, int, int);
void set_num(int **, int, int);

int main(void) {
	int n, m;
 	int **p;
	
	scanf("%i %i", &n, &m);
	p = alloc(n, m);
	set_num(p, n, m);
	pprint(p, n, m);
	for(int i = 0; i < n; i++) 
		free(p[i]);
	free(p);
		
}

int **alloc(int n, int m){
	int **p;
	p = (int **) malloc(n*sizeof(int *));
	for(int i = 0; i < n; i++) 
		p[i] = (int *) malloc(m*sizeof(int));
	return (p);
}

void pprint(int **p, const int n, const int m) {
	for(int i = 0; i < n; i++) {
		for(int k = 0; k < m; k++)
			printf("%2i ", *(*(p+i)+k));
		printf("\n");
	}
}

void set_num(int **p, const int n, const int m) {
	for(int i = 0; i < n; i++)
		for(int k = 0; k < m; k++)
			*(*(p+i)+k) = i*2+k*2;
}
