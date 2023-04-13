#include "main.h"
#include <stddef.h>

/**
  * set_bit - sets bits at @index of binary form of @n to 1.
  * @n: pointer to number,
  * @index: position of the bit to be set.
  * Return: 1 if successful, -1 otherwise.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1, range;

	if (n == NULL)
		return (-1);
	range = sizeof(unsigned long int) * 8 - 1;
	if (index > range)
		return (-1);
	mask = mask << index;
	*n = (*n | mask);
	if (n == NULL)
		return (-1);
	else
		return (1);
}
