#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - asdfg
 *
 * @head: asdfg
 * @n: asdfg
 *
 * Return: asdfg
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	current = *head;

	while (current->next)
		current = current->next;

	new->prev = current;
	current->next = new;

	return (new);
}
