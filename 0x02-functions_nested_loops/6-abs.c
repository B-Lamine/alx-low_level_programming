#include "main.h"

/**
 * _abs - prin-ts absolute vaue of number.
 * @n: integer
 *
 * Return: n if it is positive or null and -n if it is negative.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
