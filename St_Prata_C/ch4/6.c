#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[10], surname[15];
	int len;

	scanf("%s%s", name, surname);
	printf("%s %s\n", name, surname);
	len = strlen(name);
	printf("%*i ", len, len);
	len = strlen(surname);
	printf("%*i\n", len, len);
	return (0);
}

