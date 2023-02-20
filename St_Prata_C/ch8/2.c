#include <stdio.h>

int main(void) {
	int ch;

	while ((ch = getchar()) != EOF) {
		switch (ch) {
			case ('\n'):
				printf("\\n");
				break;
			case ('\t'):
				printf("\\t");
				break;
			default : 
				putchar(ch);
				break;
		}
	}
		return (0);
}
