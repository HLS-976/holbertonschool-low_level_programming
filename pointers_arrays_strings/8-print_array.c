#include <stdio.h>

/**
 * print_array - print n element of the array
 * @n: number parameter
 * @a: array parameter
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
