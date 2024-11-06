#include "main.h"

/**
 * _puts_recursion - prints string with recusrion method
 * @s: char
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
	}
}
