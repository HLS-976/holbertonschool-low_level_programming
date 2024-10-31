#include "main.h"

/**
 * puts_half - print half string
 * @str: parameter
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int n = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len--;

	if ((len % 2) != 0)
	{
		n = (len + 1) / 2;

		for ( ; n <= len; n++)
		{
			_putchar(str[n]);
		}
		_putchar('\n');
	}
}
