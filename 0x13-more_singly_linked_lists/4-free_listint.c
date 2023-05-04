#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - frees all nodes of a list.
  * @head: pointer to the list's head.
  */
void free_listint(listint_t *head)
{
	listint_t *last_node = NULL;

	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	last_node = head;
	while (last_node->next->next != NULL)
		last_node = last_node->next;
	free(last_node->next);
	last_node->next = NULL;
	free_listint(head);
}

