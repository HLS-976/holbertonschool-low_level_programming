#include <stdlib.h>

/**
 * _strdup - returns a duplicate string with malloc pointer
 * @str: char
 * Return: char
 */

char *_strdup(char *str)
{

	char *ptr_str;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	ptr_str = malloc(sizeof(char) * (i + 1));

	if (ptr_str == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		ptr_str[j] = str[j];
	}

	ptr_str[i] = '\0';

	return (ptr_str);
}
