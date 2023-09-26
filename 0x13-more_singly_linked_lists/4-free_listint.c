#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
