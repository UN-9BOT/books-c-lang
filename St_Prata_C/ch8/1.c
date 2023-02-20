#include <stdio.h>

int main(void) {
	int counter = 0;

	while((getchar()) != EOF) 
		counter++;
	printf("%i", counter-1);

	return (0);
}




