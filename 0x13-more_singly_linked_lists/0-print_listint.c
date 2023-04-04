#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * print_listint - prints contents of listint_t list.
  * @h: pointer to head of the list.
  * Return: number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	unsigned int count;
	listint_t *cursor;


	cursor = (listint_t *)h;
	count = 0;
	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		cursor = cursor->next;
		count++;
	}
	return (count);
}
