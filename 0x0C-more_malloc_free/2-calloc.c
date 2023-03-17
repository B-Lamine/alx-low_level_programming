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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (ptr);
	}
	*(int *)ptr = 0;
	return (ptr);
}

