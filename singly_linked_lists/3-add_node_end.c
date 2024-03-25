#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * add_node_end - asdfg
 *
 * @head: asdfg
 * @str: asdfg
 *
 * Return: asdfg
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	char *string;
	int len;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	string = strdup(str);
	if (!string)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = string;

	for (len = 0; string[len]; len++)
		;

	new_node->len = len;
	new_node->next = NULL;

	if (!(*head))
		*head = new_node;
	else if (!(*head)->next)
		(*head)->next = new_node;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);

}
