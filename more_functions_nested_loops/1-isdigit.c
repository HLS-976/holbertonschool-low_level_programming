#include <ctype.h>

/**
 * _isdigit - checks if the given parameter is digit or not
 * @c: parameter
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
