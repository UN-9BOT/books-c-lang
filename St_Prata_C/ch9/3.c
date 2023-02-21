#include <stdio.h>

void foo(char ch, int i, int k);
int main(void) {
	char ch = 'x';
	int i = 3, k = 5;
	foo(ch, i, k);

	return (0);
}
void foo(char ch, int i, int k) {
	for(;k > 0; k--) {
		for(int j = i; j > 0; j--)
			putchar(ch);
		putchar('\n');
	}
}
		


