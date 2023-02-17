#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[10];
	int len_word;

	scanf("%s", word);
	len_word = strlen(word) - 1;
	for (; len_word >= 0; len_word--)
		printf("%c", word[len_word]);
	return (0);
}
