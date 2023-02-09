#include <stdio.h>

int main(void)
{
	float num;

	scanf("%e", &num);
	printf("%.3e", num*365*24*60*60);

	return (0);
}

