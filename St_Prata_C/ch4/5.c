#include <stdio.h>

int main(void)
{
	float speed, size, time;

	printf("Speed (mbits) | Size (mb)\n");
	scanf("%f%f", &speed, &size);

	speed /= 8;
	time = size / speed;
	printf("При скорости загрузки %.2f мегабайт в секунду, файл \
размером %.2f мегабайт загружается за %.2f секунды.\n",
speed, size, time);
	return (0);
}

