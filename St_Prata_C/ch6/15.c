#include <stdio.h>

int main (void)
{
	char line[255];
	
	for (int i = 0; i < 255; i++)
		scanf("%c", &line[i]);
	for (int i = 0 ; i < 255; i++)
		printf("%c", line[i]);
	return (0);
}
