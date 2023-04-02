#include <stdio.h>

int main(void) {
	char ps[]= "String";
	
	*(ps + 1) = 'p';
	printf("%s", ps);
	return (0);
}
