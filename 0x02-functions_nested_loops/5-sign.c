#include "main.h"

/**
 * print_sign - checks if number is positive, null or negative.
 * @n: integer to be checked.
 *
 * Return: '+' if positive, '0' if null and '-' if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
