#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_t - asdfg
 *
 * @str: asdfg
 * @len: asdfg
 *
 * @next: asdfg
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif
