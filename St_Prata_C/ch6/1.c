#include <stdio.h>

int main(void)
{
	char lets[26];

	for (int i = 97, j = 0; j < 26; j++, i++)
		lets[j] = i;
	printf("%s", lets);
	return (0);
}
