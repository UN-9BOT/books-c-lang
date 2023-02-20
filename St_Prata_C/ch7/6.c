#include <stdio.h>

int main(void) {
	char ch; 
	int inc = 0;
	char old = '\0';

	while((ch = getchar()) != '#') {
		if(old == 'e' && ch == 'i')
			inc++;
		old = ch;
	}
	printf("%i", inc);
	return (0);
}
