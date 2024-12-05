#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: dlistint_t *
 * @index: unsigned int
 * Return: dlistint_t *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int x = 0;

	while (current != NULL)
	{
		current = current->next;
		x++;

		if (x == index)
			return (current);
	}
	return (NULL);
}
