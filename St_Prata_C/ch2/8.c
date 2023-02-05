#include <stdio.h>

void one_three(void);

int main(void)
{
	printf("Start:\n");
	one_three();
	printf("Okay!");

	return (0);
}

void one(void)
{
	printf("One\n");
}

void two(void)
{
	printf("Two\n");
}

void three(void)
{
	printf("Three\n");
}


void one_three(void)
{
	one();
	two();
	three();
}


