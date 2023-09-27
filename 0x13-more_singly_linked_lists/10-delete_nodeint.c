#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes a node  at a certain index
 * @head: pointer to the first element in the list
 * @index: is the index of the node that should be deleted
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *currnt = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}
	currnt = tmp->next;
	tmp->next = currnt->next;
	free(currnt);
	return (1);
}
