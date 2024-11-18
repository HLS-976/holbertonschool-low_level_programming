#include "main.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: char *
 * @f: void
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
