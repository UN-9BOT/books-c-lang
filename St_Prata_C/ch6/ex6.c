#include <stdio.h>

int main(void)
{
	char words[] = "nums\0";
	printf("%s", &words[0]);
}
