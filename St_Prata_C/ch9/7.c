#include <stdio.h>
#include <ctype.h>

int main(void) {
	int ch;
	while((ch = getchar()) != EOF) {
		if(isalpha(ch))
			printf("%i", (isupper(ch)) ? (ch - 64): (ch - 96));
	}
	return (0);
}
