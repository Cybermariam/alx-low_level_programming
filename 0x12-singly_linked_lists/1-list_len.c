#include "lists.h"
#include <stdlib.h>

/**
 * list_len - return the number of elements in a linked list_t list.
 * @h: pointer to list_t
 * Return: numbers of element
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}
