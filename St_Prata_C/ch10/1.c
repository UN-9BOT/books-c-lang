#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main(void) {
	const int rain[YEARS][MONTHS] = 
	{
		{4, 4, 4, 3, 2, 3, 1, 2, 5, 4, 2, 3},
		{4, 2, 4, 3, 1, 3, 1, 2, 4, 3, 2, 3},
		{4, 4, 7, 3, 2, 1, 1, 2, 4, 4, 1, 3},
		{4, 4, 4, 1, 2, 3, 5, 2, 4, 4, 1, 3},
		{4, 4, 4, 3, 3, 3, 1, 5, 4, 4, 2, 3}
	};
	int year, month;

	float subtot, total;
	for(year = 0, total = 0; year < YEARS; year++) {
		for(month = 0, subtot = 0; month < MONTHS; month++) 
			subtot += *(*(rain+year)+month);
		printf("%5d %15.lf\n", 2010+year, subtot);
		total += subtot;
	}
	printf("%.lf\n", total / YEARS);

	for(month = 0; month < MONTHS; month++) {
		for(year = 0, subtot = 0; year < YEARS; year++) 
			subtot += *(*(rain+year)+month);
		printf("%2.lf ", subtot/YEARS);
	}
}
