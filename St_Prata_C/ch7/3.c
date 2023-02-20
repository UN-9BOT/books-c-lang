#include <stdio.h>

int main(void) {
	int even, odd; // чет и нечёт
	int i_even, i_odd;
	int ch;
	even = odd = i_even = i_odd = 0;

	while(scanf("%i", &ch), ch != 0) {
		switch (ch % 2) {
			case (0):
				even++;
				i_even += ch;
				break;
			case (1):
				odd++;
				i_odd += ch;
		}
	}
	printf("even - %i, i_even - %i\nodd - %i, i_odd - %i", even, i_even / even,
			odd, i_odd / odd);
	return (0);
}
