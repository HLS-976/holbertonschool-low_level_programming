#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position.
 * @h: pointer which the pointer to new node
 * @idx: index the list add new note
 * @n: contante integer
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *prev_node = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < (idx - 1))
	{
		if (!prev_node)
			return (NULL);

		prev_node = prev_node->next;
		i++;
	}

	if (prev_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->n = n;
	new_node->next = prev_node->next;
	new_node->prev = prev_node;
	prev_node->next->prev = new_node;
	prev_node->next = new_node;

	return (new_node);
}
