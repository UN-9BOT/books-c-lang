#include <stdio.h>

int main(void)
{
	int nums[8];

	for (int i = 7; i >= 0; i--)
		scanf("%i", &nums[i]);
	for (int i = 0; i <= 7; i++)
		printf("%i", nums[i]);
	return (0);
}
