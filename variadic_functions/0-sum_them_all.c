#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameter
 * @n: const unsigned int
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int res = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		res += va_arg(args, int);

	va_end(args);
	return (res);
}
