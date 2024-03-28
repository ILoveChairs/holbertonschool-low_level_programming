#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - asdfg
 *
 * @head: asdfg
 * @n: asdfg
 *
 * Return: asdfg
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	current = malloc(sizeof(dlistint_t));
	if (!current)
		return (NULL);

	current->n = n;
	current->prev = NULL;
	current->next = *head;

	if (!*head)
	{
		*head = current;
		return (current);
	}

	(*head)->prev = current;
	*head = current;

	return (current);
}
