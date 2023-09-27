#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		new = *head;
		*head = (*head)->next;
		free(new);
	}
	*head = NULL;
}
