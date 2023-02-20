#include <stdio.h>

int main(void) {
	char ch;
	char symbols[8];

	for(int i = 0; (ch = getchar()) != '#'; i++) {
		symbols[i] = ch;
		if (i == 7) {
			for(int k = 0; k != 8; k++)
				printf("%c - %i\t", symbols[k], symbols[k]);
			printf("\n");
			i = 0;
		}
	}
	
	return (0);
}

