#include "main.h"

/**
 * print_last_digit - prints last digit of any number.
 * @n: input number
 *
 * Return: result of the operation n%10
 */
int print_last_digit(int n)
{
	int lstd;

	if (n >= 0)
	{
		lstd = n % 10;
		_putchar(lstd + '0');
		return (lstd);
	}
	else
	{
		lstd = -n % 10;
		_putchar(lstd + '0');
		return (lstd);
	}
}
