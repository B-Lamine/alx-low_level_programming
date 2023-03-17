#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an integer of elements of values from @min to @max.
  * @min: lowest value of elements.
  * @max: highest value of elements.
  *
  * Return: the array, or NULL if malloc fails.
  */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (max < min)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (max - min + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (i < max - min + 1)
	{
		*(ptr + i) = min + i;
		i++;
	}
	return (ptr);
}
