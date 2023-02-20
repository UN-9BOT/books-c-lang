#include <stdio.h>
#define PAY 10

int main(void) {
	float hours, all, tax, clean;

	clean = 0;
	scanf("%f", &hours);
	all = (hours > 40) ? (hours / 40 * PAY * 1.5) + 
		hours * PAY : hours * PAY;
	tax = all;
	if(tax > 300) {
		tax -= 300;
		clean += 300 * 0.15;
		if(tax > 150) {
			tax -= 150;
			clean += 150 * 0.2;
			clean += tax * 0.25;
		}
		else
			clean += tax * 0.25;
	}
	else 
		clean += tax * 0.15;
	printf("%f", clean);
	return (0);
}
