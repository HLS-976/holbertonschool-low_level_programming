#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: const dlinstint_t *
 * Return: size_t the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
