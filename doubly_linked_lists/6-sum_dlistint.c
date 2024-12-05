#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: dlistint_t
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
