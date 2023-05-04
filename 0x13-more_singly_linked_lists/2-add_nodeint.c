#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_nodeint - adds a node to a given list with given data.
  * @head: pointer to the adress of the head of the list,
  * @n: integer
  * Return: new heads's adress.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node ==  NULL)
		return (NULL);
	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (*head);
}
