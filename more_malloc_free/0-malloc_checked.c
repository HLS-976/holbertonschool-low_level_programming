#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		return (98);
	}

	return (ptr);
}
