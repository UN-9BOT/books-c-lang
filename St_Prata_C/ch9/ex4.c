#include <stdio.h>

void menu(void);
int scope();

int main(void) {
	menu();
	return (0);
}


void menu(void) {
	printf("Select one option:\n"
			"1) Копировать файлы	2) Переместить файлы\n"
			"3) Удалить файлы		4) Выйти из программы\n"
			"Введите номер выбранного варианта:\n");
	scope();
}

int scope() {
	int opt;
	scanf("%i", &opt);
	switch(opt) {
		case (1):
			printf("cp file1 file2\n");
			return 1;
		case (2):
			printf("mv file1 ../file2");
			return (2);
		case (3):
			printf("rm file");
			return (3);
		case (4):
			printf("Завершаем работу");
			return (4);
		default :
			printf("Ошибка\n");
			menu();
	}
	return (0);
}
