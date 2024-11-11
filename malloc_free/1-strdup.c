#include <stdlib.h>

/**
 * _strdup - returns a duplicate string with malloc pointer
 * @str: char
 * Return: char
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *ptr_str = NULL;
		int i = 0;
		int j;

		while (str[i] != '\0')
		{
			i++;
		}

		ptr_str = malloc(sizeof(char) * i);

		if (ptr_str == NULL)
		{
			return (NULL);
		}

		for (j = 0; j < i; j++)
		{
			ptr_str[j] = str[j];
		}

		return (ptr_str);
	}
}
