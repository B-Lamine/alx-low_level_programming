#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array of @nmemb elements of @size size.
  * @nmemb: number of elements.
  * @size: size in bytes of each element.
  *
  * Return: address to the array.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	char *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc (nmemb * size);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size + 1)
	{
		*(ar + i) = 0;
		i++;
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr = ar;
	return (ptr);
}

