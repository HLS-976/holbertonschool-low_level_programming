#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings
 * @separator: const char *
 * @n: const unsigned int
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
