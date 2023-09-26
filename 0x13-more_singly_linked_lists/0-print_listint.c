#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
