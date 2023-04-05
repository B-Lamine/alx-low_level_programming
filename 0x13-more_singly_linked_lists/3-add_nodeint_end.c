#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * add_nodeint_end - adds a node at the end of the given list that stores
  * given data.
  * @head: pointer to address of the head of the list,
  * @n: integer to be stored in the new node.
  * Return: address of the new node.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *cursor;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		cursor = *head;
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new_node;
	}
	return (cursor);
}
