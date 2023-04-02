#include <stdio.h>
#include <time.h>

extern int rand(unsigned long int);

int main(void) {
	for(int count = 0; count < 5; count++) 
		printf("%i\n", rand((unsigned long int) time(0)));
	return (0);
}
