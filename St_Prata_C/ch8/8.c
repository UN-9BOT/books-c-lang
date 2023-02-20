#include <stdio.h>
#include <stdlib.h>

float operation(int *p_oper, float *p_num1, float *p_num2);
int validate_oper(char ch);

int main(void) {
	int ch;
	float num1 = 0, num2 = 0;
	float res;

	system("clear");
	printf("Введите операцию:\n"
			"s. сложение	v. вычитание\n"
			"y. умножение	d. деление\n"
			"q. завершение\n");
	while((ch = getchar()) != 'q') {
		if(ch == '\n') continue;
		if(!validate_oper(ch)) {
			printf("Неверная операция\n");
			continue;		
		}
		system("clear");
		putchar(ch);
		printf("\nВведите первое число\n");
		while((scanf("%f", &num1)) != 1)
			printf("\nНеверное значение\n");
		printf("\nВведите второе число\n");
		while((scanf("%f", &num2)) != 1)
			printf("\nНеверное значение\n");
		system("clear");
		res = operation(&ch, &num1, &num2);
		printf("%f %c %f = %f\n\n\n", num1, ch, num2, res);
		printf("Введите операцию:\n"
				"s. сложение	v. вычитание\n"
				"y. умножение	d. деление\n"
				"q. завершение\n");
	}
	return (0);
}

int validate_oper(char ch) {
	switch(ch) {
		case 's':
		case 'v':
		case 'y':
		case 'd':
			return (1);
	}
	return (0);
}

float operation(int *p_oper, float *p_num1, float *p_num2) {
	switch (*p_oper) {
		case 's':
			return (*p_num1 + *p_num2);
		case 'v':
			return (*p_num1 - *p_num2);
		case 'd': 
			if (*p_num2 == 0) {
				printf("Второе значение равно нулю\n"
						"Введите повторно второе значени\n");
				scanf("%f", p_num2);
			}
			return (*p_num1 / *p_num2);
		case 'y':
			return (*p_num1 * *p_num2);
	}
	return (1.0);
}

	
