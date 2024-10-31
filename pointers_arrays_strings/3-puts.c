#include "main.h"

/**
 * _puts - print string following by a new line
 * @str: parameter
 */

void _puts(char *str)
{

	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
