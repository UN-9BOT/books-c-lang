#include <stdio.h>
#include <stdlib.h>
#include "pe12-2a.h"

int main(void) {
	int mode;
	printf("Введите 0 для метрического режима или 1 для амеркианского режима:\n");
	if(!scanf("%d", &mode)) {
		printf("Exception: Not correct mode");
		exit(0);
	}
	while(mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Введите 0 для метрического режима или 1 для амеркианского режима:\n");
		printf("или -1 для завершения\n");
		if(!scanf("%d", &mode)) {
			printf("Exception: Not correct mode");
		exit(0);
		}
	}
	printf("Exit program\n");
	return (0);
}

