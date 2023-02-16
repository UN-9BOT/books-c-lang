#include <stdio.h>
#define MIN 60

int main(void)
{
	int num;

	scanf("%i", &num);
	while(num > 0)
	{
		printf("h = %i, m = %i\n", num / 60, num % 60);
		scanf("%i", &num);
	}
	return (0);
}
