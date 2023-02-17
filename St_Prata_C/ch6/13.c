#include <stdio.h>

int _pow(int n)
{
	int num = 2;

	for (; n > 0; n--)
		num *= 2;
	return num;
}

int main(void)
{
	int nums[8];

	for (int i = 0; i <= 7; i++)
		nums[i] = _pow(i);
	for (int i = 0; i <= 7; i++)
		printf("%i ", nums[i]);

	return (0);
}
