#include <stdio.h> 

void bin(unsigned long);

int main(void) {
	unsigned long a;
	printf("Введите число: ");
	scanf("%lu", &a);
	printf("В двоичной системе: ");
	bin(a);
	putchar('\n');
	return 0;
}

void bin(unsigned long a) {
	int g;
	g = a % 2;
	if (a >= 2)
		bin(a / 2);
	putchar(g == 0 ? '0' : '1');
}