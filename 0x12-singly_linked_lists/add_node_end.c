#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * _strlen - counts the number of characters in a string.
  * @s: pointer to an array of characters.
  *
  * Return: length of the string.
  */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);

}

/**
  * add_node_end - adds a node at the end of the given list that stores given
  * data.
  * @head: pointer to address of the head of the list,
  * @str: data to be stored in the new node.
  * Return: address of the new node.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = *head;
	while (new != NULL)
	{
		new = new->next;
		printf("%s \n", str);
	}
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->str = strdup(str);
	new->len = _strlen(str);
	return (new);
}
