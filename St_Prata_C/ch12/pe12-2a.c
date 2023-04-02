#include <stdio.h>
#include <stdlib.h>

static int mode;
static int km;
static int fuel;

void set_mode(int in_mode) {
	mode = in_mode;

}

void get_info(void) {
	printf("Введите пройденное расстоянеие в км: ");
	if(!scanf("%i", &km)) {
		printf("Exception: Not correct km\n");
		exit(0);
	}
	printf("Введите обьем топлива: ");
	if(!scanf("%i", &fuel)) {
		printf("Exception: Not correct fuel\n");
		exit(0);
	}



