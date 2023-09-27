#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a new node at a given posn
 * @head: a pointer to pointer head
 * @idx: index
 * @n: data
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *previous = NULL;
	listint_t *current = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (current != NULL && i < idx)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (i == idx)
	{
		previous->next = newNode;
		newNode->next = current;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}
