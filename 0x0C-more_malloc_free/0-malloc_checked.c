#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory of a given size and returns ints address
  * @b: number of bytes to be allocated.
  *
  * Return: address to the allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	else
		return (ptr);
}
