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
	for (len = 0; accept[len] != '\0'; len++)
	{
		if (s[i] == accept[len])
		{
			count++;
			i++;
			len = 0;
		}
	}
	if (count == 0 || s[i] == '\0')
		return (count);
	else
		return (count + 1);
}
