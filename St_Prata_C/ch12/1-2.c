#include <stdio.h>

void critic(int *);
int main(void) {
	int units = 0;

	printf("Сколько фунтов весит маленький бочонок масла\n");
	do {
		critic(&units);
	}
	while(units != 56);

	printf("Yes");
	return (0);
}

void critic(int * p) {
	scanf("%i", p);
	printf("No\n");
}
	

