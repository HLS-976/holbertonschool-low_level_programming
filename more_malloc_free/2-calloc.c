#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr_arr;


	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr_arr = calloc(nmemb, size);

	if (ptr_arr == NULL)
		return (NULL);

	return (ptr_arr);
}
