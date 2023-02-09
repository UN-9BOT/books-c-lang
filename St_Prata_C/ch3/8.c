#include <stdio.h>

int main(void)
{
	int pint, unz, loz, mloz;
	int couple;
	
	scanf("%i", &couple);
	pint = 2 * couple;
	unz = couple * 8;
	loz = unz * 2;
	mloz = loz * 3;
	printf("- %i - чашек в пинтах %i, в унциях %i, в ложках %i, в чайных ложках %i", couple, pint, unz, loz, mloz);
	return (0);
}
	
