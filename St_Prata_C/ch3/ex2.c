#include <stdio.h>

int main(void)
{
	int k = 10;
	int c;

	printf("%d test %n whoo \n", k, &c);
	printf("%d", c);

}
