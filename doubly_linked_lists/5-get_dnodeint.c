#include "lists.h"
#include <stdlib.h>

/**
 *  get_dnodeint_at_index- asdfg
 *
 * @head: asdfg
 * @index: asdfg
 *
 * Return: asdfg
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head)
		return (NULL);

	current = head;
	for (i = 0; current->next; i++)
	{
		if (i == index)
			return (current);

		current = current->next;
	}

	if (i == index)
		return (current);

	return (NULL);
}
