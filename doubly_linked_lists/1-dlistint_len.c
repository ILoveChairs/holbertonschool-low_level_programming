#include "lists.h"

/**
 * dlistint_len - asdfg
 *
 * @h: asdfg
 *
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	if (!h)
		return (len);

	while (h->next)
	{
		h = h->next;
		len++;
	}

	len++;

	return (len);
}
