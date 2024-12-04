#include "lists.h"

/**
 * free_list - frees a list
 * @head: list_t *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *next_node;
	list_t *current = head;

	while (current != NULL)
	{
		next_node = current->next;

		if (current->str != NULL)
			free(current->strr);
		free(current);
		current = next_node;
	}
}
