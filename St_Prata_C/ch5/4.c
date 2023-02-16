#include <stdio.h>

int main(void)
{
	const float fut = 182.0 / 5;
	const float dum = 182.0 / 11.7;
	float num;

	printf("Введите высоту в сантиметрах: ");
	scanf("%f", &num);
	while(num > 0)
	{
		printf("%.1f см = %.0f футов, %.1f дюймов\n\n", \
				num, \
				num / fut, \
				num / dum);
	printf("Введите высоту в сантиметрах: (<=0 для выхода из программы) ");
	scanf("%f", &num);
	}
	printf("Работа завершена\n");
	return (0);
}
	
