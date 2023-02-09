#include <stdio.h>

int main(void)
{
	const float mol = 3.0E-23;
	const int kv = 950;
	int v;

	scanf("%i", &v);
	printf("%e", (v * kv) / mol);
	
	return (0);
}

