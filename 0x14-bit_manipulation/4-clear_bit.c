#include "main.h"
#include <stddef.h>

/**
 * clear_bit - set bit of binary representation of number @n at position @index
 * to 0.
 * @n: number,
 * @index: bit position.
 * Return: 1 on success, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, range;

	mask = 1;
	if (n == NULL)
		return (-1);
	range = sizeof(*n) * 8 - 1;
	if (index > range)
		return (-1);
	mask = mask << index;
	*n = (*n & ~mask);
	return (1);
}
