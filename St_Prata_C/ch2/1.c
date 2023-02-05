#include <stdio.h>

int main(void)
{
	char name[25], surname[25];
	
	scanf("%s %s", name, surname);
	printf("%s %s\n", name, surname);
	printf("%s\n%s\n", name, surname);
	printf("%s", name);
	printf("%s", surname);

	return (0);
}
