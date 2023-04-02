#include <stdio.h>

void ex1(void);

int main(void) {
	ex1();
	return (0);
}

void ex1(void) {
	int n;
	scanf("%i", &n);
	char arr[n];
	
	for(int i = 0; i < n; i++) 
		arr[i] = getchar();
	printf("%s", arr);
}
		
