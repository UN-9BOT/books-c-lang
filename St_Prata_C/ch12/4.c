#include <stdio.h>

void calls(void);

int main(void) {
	for(int i=0; i < 10; i++)
		calls();
	return (0);
}

void calls(void) {
	static int num;

	printf("Это %i вызов функции\n", ++num);
}
