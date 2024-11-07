#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_num - Print the number.
 *
 * @n: n is Int
 */

void	print_num(int n)
{
	int	n1;
	int	n2;

	n1 = n / 10;
	n2 = n % 10;
	_putchar(n1 + '0');
	_putchar(n2 + '0');
}

/**
 * times_table - Table of nine
 *
 */

void	times_table(void)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			result = i * j;
			if (j > 0 && result < 10)
				_putchar(' ');
			if (result > 9)
				print_num(result);
			else
				_putchar(result + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
