#include "lists.h"

/**
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cursor, *tmp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	cursor = *h;
	while (i < idx)
	{
		if (cursor == NULL)
			return (NULL);
		cursor = cursor->next;
		i++;
	}
	tmp = cursor->prev;
	tmp->next = add_dnodeint(&cursor, (const int)n);
	return(tmp->next);
}
