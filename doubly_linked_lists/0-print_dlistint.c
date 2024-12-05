#include "lists.h"

/**
 * print_dlistint -prints all the elements of doubly list
 * @h: const dlistint_t *
 * Return: size_t the number of element of a list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->n)
			printf("%d\n", current->n);

		count++;
		current = current->next;
	}
	return (count);
}
