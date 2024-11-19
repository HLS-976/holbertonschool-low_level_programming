#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: int *
 * @size: int
 * @cmp: int *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
				return (index);
		}
		return (-1);
	}
	else
		return (-1);
}
