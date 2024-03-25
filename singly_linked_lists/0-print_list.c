#include "lists.h"
#include <stdio.h>

/**
 * print_list - asdfg
 *
 * @h: asdfg
 *
 * Return: asdfg
 */
size_t print_list(const list_t *h)
{
	list_t *current;
	size_t i;

	if (h->str)
		printf("[%i] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");

	current = h->next;

	for (i = 1; current; i++)
	{
		if (current->str)
			printf("[%i] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		current = current->next;
	}

	return (i);
}
