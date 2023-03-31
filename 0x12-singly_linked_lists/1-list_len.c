#include "lists.h"
#include <stdlib.h>

/**
  * list_len - counts number of nodes of given list.
  * @h: head of the list.
  * Return: list length.
  */
size_t list_len(const list_t *h)
{
	unsigned int i;
	list_t *temp;

	temp = (list_t *)h;
	i = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
