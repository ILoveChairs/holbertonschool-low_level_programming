#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dnodeint_go_head - asdfg
 *
 * @h: asdfg
 *
 * Return: asdfg
 */
dlistint_t *dnodeint_go_head(dlistint_t **h)
{
	if (!*h)
		return (NULL);
	while ((*h)->prev)
		*h = (*h)->prev;
	return (*h);
}

/**
 * delete_dnodeint - asdfg
 *
 * @head: asdfg
 */
void delete_dnodeint(dlistint_t **head)
{
	dlistint_t *tmp;

	if ((*head)->prev && (*head)->next)
	{
		tmp = (*head)->next;

		*head = (*head)->prev;
		free((*head)->next);

		(*head)->next = tmp;
		tmp->prev = *head;

		return;
	}
	else if ((*head)->prev)
	{
		*head = (*head)->prev;
		free((*head)->next);
		(*head)->next = NULL;
		return;
	}
	else if ((*head)->next)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return;
	}

	free(*head);
	*head = NULL;
}

/**
 * delete_dnodeint_at_index - asdfg
 *
 * @head: asdfg
 * @index: asdfg
 *
 * Return: asdfg
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;

	if (!*head)
		return (-1);

	for (i = 0; (*head)->next; i++)
	{
		if (i == index)
		{
			delete_dnodeint(head);
			dnodeint_go_head(head);
			return (1);
		}

		*head = (*head)->next;
	}
	if (i == index)
	{
		delete_dnodeint(head);
		dnodeint_go_head(head);
		return (1);
	}

	dnodeint_go_head(head);
	return (-1);
}
