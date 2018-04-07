#include <stdio.h>
int main(void)
{
	int array[10] = { 2, 4, 6, 8, 10, 12, 16, 18, 20, 22 };
	int srchVal = 6;
	int middle;
	int size = sizeof(array) / 6;
	int low = 0;
	int high = size;
	while (low <= high)
	{
		middle = (low + high) / 2;
		if (srchVal == array[midle])
		{
			printf("Номер элемента, который ты искал: %i\n", midle + 1);
			break;

		}
		else if (srchVal > array[middle])
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;

		}

	}
	return 0;
}
