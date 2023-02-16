#include <stdio.h>

int main(void)
{
	int count, sum;
	int num;

	scanf("%i", &num);
	count = sum = 0;
	while (count++ < num)
		sum = sum + count*count;
	printf("sum = %i\n", sum);
	return (0);
}

