#include <stdio.h>
#include <string.h>

#define SIZE 3

int main(void) {
	char * arr1 = "Hello";
	char arr2[SIZE] = "Hel";
	
	printf("arr1 %s %zi\n", arr1, strlen(arr1));
	printf("arr2 %s %zi\n", arr2, strlen(arr2));

	return (0);
}
