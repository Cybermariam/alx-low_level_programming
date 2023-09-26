#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: A pointer to a pointer to the head of the list.
 * @n: The data to store in the new node.
 * Return:  the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addNew;

	addNew = malloc(sizeof(listint_t));
	if (addNew == NULL)
		return (NULL);
	addNew->n = n;
	addNew->next = *head;
	*head = addNew;
	return (*head);
}
