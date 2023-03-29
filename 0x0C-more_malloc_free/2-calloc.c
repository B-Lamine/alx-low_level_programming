#include "main.h"
#include <stdlib.h>

/**
  * _memset - fills with character @b the @n first bytes of the memory pointer
  * to by @s.
  * @s: pointer to memory area.
  * @b: byte to set memory to.
  * @n: number of bytes to be set.
  *
  * Return: pointer to the memory area.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

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
		return (ptr);
	ptr = (void *)_memset(ptr, 0, size);
	return (ptr);
}

