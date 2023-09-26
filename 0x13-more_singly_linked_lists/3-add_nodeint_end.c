#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: A pointer to a pointer to the head of the list.
 * @n: The data to store in the new node.
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addTo_end;
	listint_t *current;

	addTo_end = malloc(sizeof(listint_t));
	if (addTo_end == NULL)
		return (NULL);
	addTo_end->n = n;
	addTo_end->next = NULL;

	if (*head == NULL)
	{
		*head = addTo_end;
		return (addTo_end);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
		current->next = addTo_end;
	return (addTo_end);
}
