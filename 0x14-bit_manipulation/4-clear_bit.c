#include "main.h"
#include <stddef.h>

/**
  * clear_bit - sets bit of binary form of @n at @index to 0.
  * @n: address of the given number.
  * @index: position of the bit to clear.
  * Return: 1 if successful, -1 otherwise.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1, range;

	if (n == NULL)
		return (-1);
	range = sizeof(unsigned long int) * 8 - 1;
	if (index > range)
		return (-1);
	mask = mask << index;
	*n = (*n & ~mask);
	if (n == NULL)
		return (-1);
	else
		return (1);
}
