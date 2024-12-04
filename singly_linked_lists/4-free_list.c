#include "lists.h"

/**
 * free_list - frees a list
 * @head: list_t *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;

		if (node->str != NULL)
			free(node->str);

		free(node);
	}
}
