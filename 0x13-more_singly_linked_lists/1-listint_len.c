#include "lists.h"

/**
  * listint_len - counts number of nodes in a list.
  * @h: pointer to the first node.
  * Return: number of nodes.
  */
size_t listint_len(const listint_t *h)
{
	unsigned int count;
	listint_t *cursor;

	cursor = (listint_t *)h;
	count = 0;
	while (cursor != NULL)
	{
		cursor = cursor->next;
		count++;
	}
	return (count);
}
