#include "lists.h"

/**
 * list_len - asdfg
 *
 * @h: asdfg
 *
 * Return: asdfg
 */
size_t list_len(const list_t *h)
{
	list_t *current;
	int i;

	if (!h)
	{
		return (0);
	}

	current = h->next;
	for (i = 1; current; i++)
	{
		current = current->next;
	}

	return (i);
}
