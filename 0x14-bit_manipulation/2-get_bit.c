#include "main.h"

/**
  * get_bit - gets value of bit at given index of the given number.
  * @n: given number,
  * @index: position of the bit in the binary form of @n.
  * Return: bit at @index.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int check, range;

	range = sizeof(unsigned long int) * 8 - 1;
	if (index > range)
		return (-1);
	mask = mask << index;
	check = ((n & mask) && mask);
	if (check != 0 || check != 1)
		return (check);
	else
		return (-1);
}
