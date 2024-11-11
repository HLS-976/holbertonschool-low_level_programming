#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and initialize an array dynamically
 * @size: unsigned int
 * @c: char
 * Return: pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *ptr_array = malloc(size);

		*ptr_array = c;

		if (ptr_array == NULL)
		{
			return (NULL);
		}
		else
		{
			return (ptr_array);
		}
	}
}
