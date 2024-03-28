#include "lists.h"
#include <stdlib.h>

/**
 *  free_dlistint- asdfg
 *
 * @head: asdfg
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (!head)
		return;

	while (head->next)
	{
		next = head->next;
		free(head);
		head = next;
	}

	free(head);
}
