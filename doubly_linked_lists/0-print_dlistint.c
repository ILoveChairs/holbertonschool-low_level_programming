#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - asdfg
 *
 * @head: asdfg
 * @index: asdfg
 *
 * Return: asdfg
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	len = 0;
	if (!h)
		return (len);

	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	printf("%d\n", h->n);
	len++;

	return (len);
}
