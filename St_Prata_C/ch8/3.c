#include <stdio.h>
#include <ctype.h>

void wtf(int *ch);

int main(void) {
	int ch;
	int arr[] = {0, 0, 0};

	while((ch = getchar()) != EOF) {
		wtf(&ch);
		arr[ch] += 1;
	}
	printf("A-%i --- a-%i --- ?-%i", arr[0], arr[1], arr[2]);
	return (0);
}

void wtf(int *ch) {
	if(isupper(*ch)) 
		*ch = 0;
	else if(islower(*ch))
		*ch = 1;
	else 
		*ch = 2;
}
	

