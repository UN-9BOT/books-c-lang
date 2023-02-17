#include <stdio.h>

float year_dafna(float dafna);
float year_deidra(float deidra);

int main(void)
{
	float dafna = 1000, deidra = 1000;
	int year = 0;

	for(; deidra <= dafna; year++)
	{
		printf("%i year \n", year);
		dafna = year_dafna(dafna);
		deidra = year_deidra(deidra);
	}
	printf("years = %i, dafna = %.2f, deidra = %.2f", year, dafna, deidra);
	return (0);
}

float year_dafna(float dafna)
{
	printf("%.2f dafna \n", dafna);
	return dafna += 1000 * 0.1;
}

float year_deidra(float deidra)
{
	printf("%.2f deidra \n\n\n", deidra);
	return deidra += deidra * 0.05;
}
