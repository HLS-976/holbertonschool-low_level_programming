#include <ctype.h>

/**
 * _isupper - print 1 if parameter is upper else 0 otherwise
 *@c: character parameter
 *Return: 1 or 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
