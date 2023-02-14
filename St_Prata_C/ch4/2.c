#include <stdio.h>
#include <string.h>

int main(void)
{
	char name [10];
	int len_name;
	
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	len_name = strlen(name);
	printf("%*s", len_name+3, name);
	return (0);
}

