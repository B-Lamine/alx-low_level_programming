#include "lists.h"

/**
  * add_dnodeint_end - add node at end of doubly linked list.
  * @head: address of pointer to the first node.
  * @n: integer to store in the new node.
  * Return: address of new node.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->next = NULL;
	new->prev = tmp;
	return (new);
}
