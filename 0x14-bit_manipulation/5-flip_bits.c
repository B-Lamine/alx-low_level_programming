#include "main.h"

/**
 * flip_bits - count number of bits different between binary representation of
 * two given numbers.
 * @n: first number,
 * @m: second number.
 * Return: number of bits that are different.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_difference, mask;
	unsigned int range, count, i;

	bit_difference = (n ^ m);
	mask = 1;
	range = sizeof(n) * 8;
	count = 0;
	i = 0;
	while (i < range)
	{
		if ((bit_difference & mask) && mask)
			count++;
		mask <<= 1;
		i++;
	}
	return (count);
}
