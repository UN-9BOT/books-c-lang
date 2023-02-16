#include <stdio.h>


int main(void)
{
	int oper2;
	int oper1;
	int res;

	printf("Эта программа вычисляет результаты деления по модулю.\n"
			"Введите целое число, которое будет служить вторым операндом: ");

	scanf("%i", &oper2);
	
	printf("Теперь введите первый операнд: ");
	scanf("%i", &oper1);

	while(oper1 > 0)
	{
		res = oper1 % oper2;		
		printf("%i %% %i равно %i\n\n", oper1, oper2, res);
		printf("Введите следующее число для операнда (<=0 exit): ");
		scanf("%i", &oper1);
	}
}

