#include "lists.h"

/**
  * add_dnodeint - add node at the beginning of a doubly linked list.
  * @head: address of the pointer to the first node.
  * @n: integer to store in the new node.
  * Return: pointer to the first node.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
