#include "lists.h"

/**
  * free_dlistint - free doubly linked list.
  * @head: pointer to first node.
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor;

	if (head == NULL)
		return;
	cursor = head;
	while (cursor->next->next != NULL)
		cursor = cursor->next;
	while (cursor != NULL)
	{
		free(cursor->next);
		cursor = cursor->prev;
	}
	free(head);
}
