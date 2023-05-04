#include "main.h"
#include <stddef.h>

/**
 * set_bit - set bit at a specific position of the binary representation of
 * a number to 1.
 * @n: address of the number,
 * @index: position of the bit to be set.
 * Return: 1 on success, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, range;

	mask = 1;
	if (n == NULL)
		return (-1);
	if (n == NULL)
		return (-1);
	range = sizeof(*n) * 8 - 1;
	if (index > range)
		return (-1);
	mask = mask << index;
	*n = (*n | mask);
	return (1);
}
