#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: int
 * @b: int
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: int
 * @b: int
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: int
 * @b: int
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of division of a and b
 * @a: int
 * @b: int
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a and b
 * @a: int
 * @b: int
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
