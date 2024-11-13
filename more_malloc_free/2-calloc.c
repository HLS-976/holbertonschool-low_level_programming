#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr_arr;
	unsigned int i;


	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr_arr = malloc(nmemb * size);

	if (ptr_arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr_arr[i] = 0;

	return (ptr_arr);
}
