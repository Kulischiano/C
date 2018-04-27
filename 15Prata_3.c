#include <stdio.h>

int bit(int num);
int main(void)
{
	int number, count;

	puts("Введите значение int:");
	while(scanf("%d", &number) == 1)
	{
		count = bit(number);
		printf("%d колличество разрядов\r\n", count);
		puts("Введите следующее значение int:");
	}
	puts("Конец");
	return 0;
}
int bit(int num)
{
	int mask = 1;
	int count = 0;
	while(num > 0)
	{
		count += num & mask;
		num >>= 1;
	}
	return count;
}