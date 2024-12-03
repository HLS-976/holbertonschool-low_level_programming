#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list
 * @head: list_t ** a pointer to pointer
 * @str: const char * a string
 * Return: the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *trackLastNode = *head;
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	new_node->len = i;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (trackLastNode->next != NULL)
	{
		trackLastNode = trackLastNode->next;
	}

	trackLastNode->next = new_node;

	return (new_node);

}
