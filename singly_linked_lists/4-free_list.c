#include "lists.h"

/**
 * free_list - frees a list
 * @head: list_t *
 * Return: void
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (*head->str != NULL)
			free(*head->str);

		free(head);
	}
}
