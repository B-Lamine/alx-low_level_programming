#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * print_list - print elements of a given list.
  * @h: head of the list.
  * Return: number of nodes.
  */
size_t print_list(const list_t *h)
{
	unsigned int i;
	list_t *temp;


	temp = (list_t *)h;
	i = 0;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
