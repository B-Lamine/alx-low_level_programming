#include "lists.h"

/**
  * delete_dnodeint_at_index - delete node at specific position of doubly
  * linked list.
  * @head: address of pointer to first node.
  * @index: position of the node to be deleted.
  * Return: 1 on success, -1 on failure.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor1, *cursor2, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		cursor1 = tmp->next;
		*head = cursor1;
		free(tmp);
		return (1);
	}
	while (i < index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	cursor1 = tmp->prev;
	cursor2 = tmp->next;
	cursor1->next = cursor2;
	cursor2->prev = cursor1;
	free(tmp);
	return (1);
}
