#include "lists.h"

/**
  * sum_dlistint - sum of integers stored in  nodes of doubly linked list.
  * @head: pointer to the first node.
  * Return: integer sum.
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
