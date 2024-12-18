#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: int
 */

int *array_range(int min, int max)
{
	int *ptr_arr;
	int i;

	if (min > max)
		return (NULL);

	ptr_arr = malloc((max - min + 1) * sizeof(int));

	if (ptr_arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		ptr_arr[i] = min + i;

	return (ptr_arr);
}
