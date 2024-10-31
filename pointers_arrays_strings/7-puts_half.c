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

	n = len / 2;

	if (len % 2 == 0)
	{
		while (n < len)
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
	else
	{
		n = n + 1;

		while (n < len)
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
	
}
