#include <stdio.h>

void critic(void);
int main(void) {
	int units = 0;

	printf("Сколько фунтов весит маленький бочонок масла\n");
	while(scanf("%i", &units) && (units != 56)) 
		critic();
	printf("Yes");
	return (0);
}

void critic(void) {
	printf("No\n");
}
	
