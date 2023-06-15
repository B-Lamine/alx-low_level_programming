#include "lists.h"

/**
  * get_dnodeint_at_index - get node at a certain position in the doubly linked
  * list.
  * @head: pointer to the first node.
  * @index: position of the node.
  * Return: address of node at @index.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cursor;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	cursor = head;
	while (i < index)
	{
		if (cursor == NULL)
			return (NULL);
		cursor = cursor->next;
		i++;
	}
	return (cursor);
}
