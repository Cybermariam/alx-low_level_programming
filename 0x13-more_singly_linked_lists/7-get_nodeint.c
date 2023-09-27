#include <stddef.h>
#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns the nth node of a linked list.
 * @head: pointer to the head
 * @index: is the index of the node
 * Return: nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head != NULL)
	{
		if (j == index)
			return (head);
		head = head->next;
		j++;
	}
	return (NULL);
}
