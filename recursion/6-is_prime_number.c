#include "main.h"

/**
 * _prime - square function
 * @x: int
 * @y: y
 * Return: int
 */

int _prime(int x, int y)
{
	if (y == x)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	if (x % y != 0)
	{
		return (_prime(x, y + 1));
	}

	return (0);
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
	else if (n == 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (_prime(n, 2));
	}
}
