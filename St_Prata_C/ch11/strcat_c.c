#include <stdio.h>
#include <string.h>


int main(void) {
	char arr1[] = "1len1";
	char arr2[] = "2len2";

	printf("%p\n%p",  (strcat(arr1, arr2)), arr1);
	return (0);
}
