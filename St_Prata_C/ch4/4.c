#include <stdio.h>

int main (void)
{
	float hight;
	char name[30];
	
	scanf("%f%s", &hight, name);
	printf("%s, ваш рост составляет %1.3f футов\n", name, hight);
	return (0);
}

