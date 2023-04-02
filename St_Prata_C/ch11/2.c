#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void ex1(void);

int main(void) {
	ex1();
	return (0);
}

void ex1(void) {
	int n;
	scanf("%i", &n);
	char arr[n];
	char ch;

	getchar();
	for(int i = 0; i < n; i++) {
		ch = getchar();
		if (isspace(ch))
			break;
		arr[i] = ch;
	}

	printf("%s", arr);
}

