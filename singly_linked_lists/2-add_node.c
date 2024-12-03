#include "lists.h"

/**
 * add_node - adds a new nodes at the begining of a list
 * @head: list_t **
 * @str: const char **
 * Return: list_t *
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;

	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	new_node->len = i;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
