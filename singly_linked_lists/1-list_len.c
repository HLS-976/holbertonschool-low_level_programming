#include "lists.h"

/**
 * list_len - returns the number of element in a linked list
 * @h: a linked list
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	const list_t *node = h;
	int count = 0;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}

	return (count);
}
