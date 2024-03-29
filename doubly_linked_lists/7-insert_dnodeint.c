#include "lists.h"
#include <stdlib.h>



/**
 * insert_dnodeint - asdfg
 *
 * @h: asdfg
 * @n: asdfg
 *
 * Return: asdfg
 */
dlistint_t *insert_dnodeint(dlistint_t **h, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	*h = (*h)->prev;

	new->n = n;
	new->prev = *h;
	new->next = (*h)->next;

	((*h)->next)->prev = new;

	(*h)->next = new;

	return (new);
}

/**
 * insert_dnodeint_at_index - asdfg
 *
 * @h: asdfg
 * @idx: asdfg
 * @n: asdfg
 *
 * Return: asdfg
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head;
	dlistint_t *output;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (!*h)
		return (NULL);

	head = *h;
	for (i = 0; (*h)->next; i++)
	{
		if (i == idx)
		{
			output = insert_dnodeint(h, n);
			*h = head;
			return (output);
		}

		*h = (*h)->next;
	}

	if (i == idx)
	{
		output = add_dnodeint_end(h, n);
		*h = head;
		return (output);
	}

	return (NULL);
}
