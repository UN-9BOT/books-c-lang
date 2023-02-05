#include <stdio.h>

void foo(void);

int main(void)
{
	foo(); foo(); foo();
	printf("\n");
	foo(); foo();
	printf("\n");
	foo();
	return (0);
}

void foo(void)
{
	printf("Улыбайся!");
}
