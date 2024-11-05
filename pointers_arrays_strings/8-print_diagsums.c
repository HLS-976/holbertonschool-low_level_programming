#include <stdio.h>

/**
 * print_diagsums - prints of the two diagonals of a square matrix
 * @a: int
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int i;

	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d\n", sum1, sum2);
}
