#include "lists.h"
#include <stdlib.h>

/**
 * free_list - asdfg
 *
 * @head: asdfg
 */
void free_list(list_t *head)
{
	list_t *current;

	if (!head)
		return;

	while(head->next)
	{
		free(head->str);
		current = head;
		head = head->next;
		free(current);
	}

	free(head->str);
	free(head);
}
