#include "main.h"

/**
 * get_bit - get value of a bit at a given position of a given number.
 * @n: number to inspect,
 * @index: position to inspect.
 * Return: bit at @index.
 */
int get_bit(unsigned long int n, unsigned long int index)
{
	unsigned long int mask = 1;
	unsigned int check, range;

	range = sizeof(n) * 8 - 1;
	if (index > range)
		return (-1);
	mask = mask << index;
	check = ((n & mask) && mask);
	if (check != 0 || check != 1)
		return (check);
	else
		return (-1);
}
