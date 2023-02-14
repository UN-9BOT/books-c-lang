#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi. Your name?\n");
	scanf("%s", name);
	printf("Your size in pounds?\n");
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("%s, your pounts = %2.2f\n", name, volume);
	printf("len name %i", letters);
	printf("bytes in name = %i", size);

	return (0);
}
