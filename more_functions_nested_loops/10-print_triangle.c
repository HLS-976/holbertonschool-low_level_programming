#include "main.h"

/**
 * print_triangle - print triangle
 * @size: parameter
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for ((j = size - i); j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		if (i == size)
		{
			continue;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
