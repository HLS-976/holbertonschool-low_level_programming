#include "main.h"

/**
 * _square - square function
 * @x: int
 * @y: y
 * Return: int
 */

int _square(int x, int y)
{
	if (y * y < x)
	{
		return (_square(x, y + 1));
	}
	else if (y * y > x)
	{
		return (-1);
	}
	else
	{
		return (y);
	}
}

/**
 * _sqrt_recursion - return natural square root of a number
 * @n: parameter
 * Return: parameter
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_square(n, 0));
}
