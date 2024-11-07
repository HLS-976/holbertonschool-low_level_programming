#include "main.h"

/**
 * _strspn - Function STRSPN
 * @s: Char
 * @accept: Char
 *
 * Return: Unsigned Int
 */

unsigned int	_strspn(char *s, char *accept)
{
	int	i;
	int	n;
	int	found;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		n = 0;
		found = 0;
		while (accept[n])
		{
			if (s[i] == accept[n])
			{
				found = 1;
				count++;
				break;
			}
			n++;
		}
		if (found == 0)
			return (count);
		i++;
	}
	return (count);
}
