#include <ctype.h>

/**
 * _isalpha - checks alphabeic character
 * @c: take alphabetic character value
 * Return: 0 or 1 value
 */
int _isalpha(int c)
{
	if (isalpha(c) && (islower(c) || isupper(c)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
