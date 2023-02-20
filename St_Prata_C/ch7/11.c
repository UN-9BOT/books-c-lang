#include <stdio.h>
#include <stdlib.h>

void add_thing(float *cost, int *weight, char ch);
void hello(int n);
void get_price_delivery(int *weight, float *tax_delivery);

int main(void) {
	char ch;
	float all_cost = 0;
	float cost = 0;
	int weight = 0;
	float tax_delivery;

	system("clear");	
	hello(0);
	while(scanf("%c", &ch)) {
		if(ch == 'q') break;
		if(ch != '\n') {
			add_thing(&cost, &weight, ch);
			all_cost += cost;
			system("clear");	
			hello(1);
		}
	}
	if(all_cost >= 100)
		all_cost -= all_cost*0.05;
	get_price_delivery(&weight, &tax_delivery);
	all_cost += tax_delivery;
	printf("%f", all_cost);
	
	return (0);
}


void hello(int n) {
	switch (n) {
		case (0): 
			printf("Добро пожаловать в консольный магазин ABC Grocery\n"
			"---\n"
			"Опция - Наименование - Цена\n"
			"---\n"
			"a - Артишок - $2.05\n"
			"b - Свекла - $1.05\n"
			"c - Морковь - $1.09\n"
			"---\n---\n"
			"q - Завершить покупку\n\n\n");
			break;
		case (1):
			printf("---\n"
			"Опция - Наименование - Цена\n"
			"---\n"
			"a - Артишок - $2.05\n"
			"b - Свекла - $1.05\n"
			"c - Морковь - $1.09\n"
			"---\n---\n"
			"q - Завершить покупку\n\n\n");
	}
}

void add_thing(float *cost, int *weight, char ch) {
	const float artishok = 2.05;
	const float svekla = 1.05;
	const float morkov = 1.09;

	switch (ch) {
		case ('a'):
			printf("\n---\nАртишок - $2.05\nВведите вес(фунты)\n");
			scanf("%i", weight);
			*cost = *weight * artishok;
			break;
		case ('b'):
			printf("\n---\nСвекла - $1.05\nВведите вес(фунты)\n");
			scanf("%i", weight);
			*cost = *weight * svekla;
			break;
		case ('c'):
			printf("\n---\nМорковь - $1.09\nВведите вес(фунты)\n");
			scanf("%i", weight);
			*cost = *weight * morkov;
			break;
		default :
			printf("Введено не верное значение\n");
			break;
			
	}
}

void get_price_delivery(int *weight, float *tax_delivery) {
	const float less5 = 6.50;
	const float less20 = 14.0;
	const float bonus = 0.5;

	if(*weight <= 5) 
		*tax_delivery = *weight * less5;
	else if(*weight <= 20)
		*tax_delivery = *weight * less20;
	else 
		*tax_delivery = 20 * less20 + (*weight - 20) * bonus;
}

	




