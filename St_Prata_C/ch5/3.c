#include <stdio.h>
#define WEEK 7

int main(void)
{
	int num;

	scanf("%i", &num);
	while(num > 0)
	{
		printf("%i дней составляют %i недели и %i дня.\n", num, \
				num / WEEK, num % WEEK);
		scanf("%i", &num);
	}

	return (0);
}

