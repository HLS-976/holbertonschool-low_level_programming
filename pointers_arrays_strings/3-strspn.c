#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int len, i = 0;

	for (len = s[len] != '\0'; len++)
	{
		for (; accept[i] != '\0' && accept[i] != s[len]; i++)
		{}

		if ((accept[i] == '\0')
		{
			return (count);
		}
		else
		{
			count = count + 1;
		}
	}
	return (count);
}
