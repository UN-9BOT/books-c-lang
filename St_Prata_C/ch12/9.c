#include <stdlib.h>
#include <stdio.h>

#define CH 40
int main(void) {
	int num;

	scanf("%i", &num);
	char **p = (char **)malloc(num * sizeof(char *));
	for(int i = 0; i < num; i++) {
		p[i] = (char *)malloc(CH * sizeof(char));
		scanf("%s", p[i]);
	}
	printf("\n result \n");
	for(int i = 0; i < num; i++) 
		printf("%s\n", p[i]);
	return (0);
}
	
