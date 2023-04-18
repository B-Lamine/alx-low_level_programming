#include "main.h"

/**
  * get_endianness - determines the endianness of the local machine.
  * Return: 0 if big endian, or 1 if little endian.
  */
int get_endianness(void)
{
	int test = 0x01;
	char *p = (char *)&test;

	if (*p == 1)
		return (1);
	else
		return (0);
}
