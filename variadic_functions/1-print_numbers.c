#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers separed by a separator
 * @separator: char *
 * @n: const unsigned int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));

			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}

		va_end(args);
	}
	printf("\n");

}
