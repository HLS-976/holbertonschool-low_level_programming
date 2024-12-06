#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Supprime le nœud à l'index donné dans une liste doublement chaînée.
 * @head: Un pointeur vers un pointeur à la tête de la liste.
 * @index: L'index du nœud à supprimer, commençant à 0.
 *
 * Return: 1 si réussi, -1 si échoué.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Si le premier nœud doit être supprimé */
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	/* Parcourir jusqu'au nœud à supprimer */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* Si le nœud n'existe pas */
	if (current == NULL)
		return (-1);

	/* Modifier les pointeurs pour supprimer le nœud */
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}

