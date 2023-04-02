#include <stdio.h>

void arr_s_s(void);

int main(void) {
	arr_s_s();
	return (0);
}


void arr_s_s(void) {
	const char * arr1[] = 
	{
		"Hello",
		"World",
		"!"
	};

	const char arr2[3][40] = 
	{
		"Pello",
		"Rorld",
		"!"
	};

	for(int i = 0; i < 3; i++)
		printf("%-10s %-10s\n", arr1[i], arr2[i]);
	printf("%-10lu %-10lu", sizeof(arr1), sizeof(arr2));
}
