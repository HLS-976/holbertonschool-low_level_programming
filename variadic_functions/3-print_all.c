#include "variadic_functions.h"

/**
 * print_char - print a char from var args
 *
 * @list: va_list to print from
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - print an int from var args
 *
 * @list: va_list to print from
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - print a float from var args
 *
 * @list: va_list to print from
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - print a string from var args
 *
 * @list: va_list to print from
 */

void print_string(va_list list)
{
	char *string = va_arg(list, char*);

	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s", string);
}





/**
 * print_all - a function that prints anything
 *
 * @format: to use and print
 */

void print_all(const char * const format, ...)
{
	int index1 = 0;
	int index2 = 0;
	char *string = "";

	va_list list;

	type_t tab[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{'\0', NULL}
	};

	va_start(list, format);

	while (format != NULL && format[index1] != '\0')
	{
		while (index2 < 4)
		{
			if (format[index1] == *tab[index2].type)
			{
				printf("%s", string);
				tab[index2].f(list);
				string = ", ";
			}
			index2++;
		}
		index1++;
		index2 = 0;
	}
	printf("\n");

	va_end(list);
}
