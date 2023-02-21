#include <stdio.h>

int max(int n1, int n2, int n3);

int main(void) {
	printf("%i", max(4333, 234, 2333));
	return (0);
}


int max(int n1, int n2, int n3) {
	int max_num = n1;

	if(n2 > max_num)
		max_num = n2;
	if(n3 > max_num)
		max_num = n3;
	return (max_num);
}
