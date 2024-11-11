#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: int
 * @height: int
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **ptr_arr;
	int i, j;

	ptr_arr = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		ptr_arr[i] = malloc(sizeof(int) * width);

	if (ptr_arr == NULL && *ptr_arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr_arr[i][j] = 0;

	return (ptr_arr);
}
