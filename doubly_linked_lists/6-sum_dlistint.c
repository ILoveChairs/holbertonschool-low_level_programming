#include "lists.h"

/**
 * sum_dlistint - asdfg
 *
 * @head: asdfg
 *
 * Return: asdfg
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int i;

	if (!head)
		return (0)

	i = 0;
	current = head;
	while (current->next)
	{
		i += current->n;
		current = current->next;
	}

	i += current->n;

	return (i);
}
