#include <stdio.h>
#include <ctype.h>

int main(void) {
	int ch;
	int counter_alpha = 0;
	int summ = 0, counter_words = 0;

	while((ch = getchar()) != EOF) {
		if(isspace(ch)) {
			if(counter_alpha > 0) {
				summ += counter_alpha;
				counter_words += 1;
			}
			counter_alpha = 0;
		}
		else if (isalpha(ch))
			counter_alpha++;
	}
	printf("%i", summ/counter_words);
	return (0);
}
