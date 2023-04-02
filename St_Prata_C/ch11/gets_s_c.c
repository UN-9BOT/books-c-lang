#include <stdio.h>
#define SIZE 5

char * s_gets(char *, int);

int main(void) {
	char arr[SIZE];

	printf("%s", s_gets(arr, SIZE));
	return (0);
}

char * s_gets(char * arr, int n) {
	char * ret_val;
	int i = 0;

	ret_val = fgets(arr, n, stdin);
	if(ret_val) {
		while(arr[i] != '\n' && arr[i])
			i++;
		if(arr[i] == '\n')
			arr[i] = '\0';
		else 
			while(getchar() != '\n')
				continue;
	}
	return (0);
}
