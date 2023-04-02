#include <stdio.h>
#include <string.h>


int main(void) {
	char arr1[] = "1len1";
	char arr2[] = "2len2";

	printf("%p\n%p",  (strncat(arr1, arr2, 3)), arr1);
	printf("\n%s\n%zi", arr1, sizeof(arr1));

	return (0);
}

