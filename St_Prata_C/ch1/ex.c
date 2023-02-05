/*
 * convert inches in sm.
 */

#include <stdio.h>

int main(void)
{
	float sm, inch;
	sm = 2.54;
	scanf("%f", &inch);
	printf("%f", inch * sm);
}

