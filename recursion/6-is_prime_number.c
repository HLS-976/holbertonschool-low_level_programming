#include "main.h"

/**
 * _prime - square function
 * @x: int
 * @y: y
 * Return: int
 */

int _prime(int x, int y)
{
	if (y * y > x)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	else
	{
		return (_prime(x, y + 1));
	}
}

/**
 * is_prime_number - return 1 if the integer is prime number
 * @n: parameter
 * Return: parameter
 */


int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}

	return (_prime(n, 2));
}
