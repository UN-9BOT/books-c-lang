#include <stdio.h>
#include <string.h>
#define PRAISE "You're a big boss"

int main(void)
{
	char name[40];
	float kn = 10.234233213391;
	
	printf("What is your name?");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name icnlude %zd symbols and hold %zd memmory cells\n", strlen(name), sizeof name);
	printf("Greetings phrase include %zd symbols", strlen(PRAISE));
	printf(" and hold %zd memory cells.\n", sizeof PRAISE);
	printf("%.12f\n", kn);
	return (0);
}

