#include <stdio.h>
#include <string.h>
#define Q "What what"

int main(void)
{
	printf("%c", '\41');
	printf("%s, -- %ji", Q, strlen(Q));
	printf("%2.2e --- %2.2f\n", 1201.0, 1201.0);
}
