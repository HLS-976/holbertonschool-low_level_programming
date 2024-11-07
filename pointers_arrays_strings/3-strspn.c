#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j = 0;


	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0' && accept[j] != s[i])
		{
			j++;
		}

		if (accept[j] == '\0')
		{
			return (count);
		}
		else
		{
			count = count + 1;
		}
		i++;
	}
	return (count);
}
