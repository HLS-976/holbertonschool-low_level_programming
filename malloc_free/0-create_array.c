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
	unsigned int i;
	char *ptr_array;

	if (size == 0)
	{
		return (NULL);
	}

	ptr_array = malloc(size);

	if (ptr_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr_array[i] = c;
	}

	return (ptr_array);
}
