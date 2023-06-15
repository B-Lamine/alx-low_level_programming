#include "lists.h"
#include <stdio.h>

/**
  * print_dlistint - print integers stored in doubly linked list.
  * @h: pointer to first node.
  * Return: number of nodes.
  */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t count = 0;

	if (h == NULL)
		return (count);
	tmp = (dlistint_t *)h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
