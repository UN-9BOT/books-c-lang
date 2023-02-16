#include <stdio.h>

double kv(double num);

int main(void)
{
	double num;

	scanf("%lf", &num);
	printf("%.2lf\n", kv(num));
	return (0);
}

double kv(double num)
{
	return (num * num);
}
	
