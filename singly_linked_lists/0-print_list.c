#include "lists.h"

/**
 * print_list - prints all element of a list
 * @h: list of elements
 * Return:the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (!current->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		count++;

		if (!current->next)
			break;

		current = current->next;
	}

	return (count);
}
