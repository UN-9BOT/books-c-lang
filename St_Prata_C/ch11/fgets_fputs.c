#include <stdio.h>
#define SIZE 5

int main(void) {
	char words[SIZE];

	while(fgets(words, SIZE, stdin) && (words[0] != '\n'))
		fputs(words, stdout);
	return (0);
}
