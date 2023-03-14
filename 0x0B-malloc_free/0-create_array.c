#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of given size, and initializes with
  * a given character.
  * @size: size of the array.
  * @c: initialization character.
  *
  * Return: the address to the array if successful, or NULL if @size = 0 or
  * memory allocation fails.
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (0);
	ar = malloc(sizeof(char) * size);
	while (i < size)
	{
		*(ar + i) = c;
		i++;
	}
	if (ar == NULL)
		return (0);
	else
		return (ar);
}
