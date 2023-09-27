#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to the pointer head
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int node_data;

	if (head == NULL || *head == NULL)
		return (0);
	temp_node = *head;
	node_data = temp_node->n;
	*head = (*head)->next;
	free(temp_node);

	return (node_data);
}
