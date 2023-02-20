#include <stdio.h>
#include <ctype.h>

int main(void) {
	char ch;
	int space, enter, other;

	space = enter = other = 0;
	while((ch = getchar()) != '#') {
		switch (ch) {
			case ' ':
				space++;
				break;
			case '\n':
				enter++;
				break;
			default: other++;
		}
	}
	printf("%i, %i, %i", space, enter, other);
	return (0);
}

			

