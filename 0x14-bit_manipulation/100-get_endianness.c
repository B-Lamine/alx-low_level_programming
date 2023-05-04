#include "main.h"

/**
 * get_endianness - determine endianness of current machine.
 * Return: 0 if big-endian, 1 if little-endian.
 */
int get_endianness(void)
{
	int test;
	char *p;

	test = 0x01;
	p = (char *)&test;

	if (*p == 1)
		return (1);
	else
		return (0);
}
