#include <stdio.h>

int bitt(int num, int bit);
int main(void)
{
	int num, bit;
	puts("Введите значение int:");
	scanf("%d", &num);
	puts("Введите bit для проверки:");
	scanf("%d", &bit);
	printf("%d\r\n", bitt(num, bit));
	return 0;
}
int bitt(int num, int bit)
{
	int mask = 1;
	mask <<= bit;
	return(num & mask);
}