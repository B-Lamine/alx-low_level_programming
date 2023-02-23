#include "main.h"

/**
 * _isdigit - checks if input is a digit.
 *@c: input to be checked.
 *
 * Return: 1 if input is digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if ((c / 10) == 0 || (c >= 48 && c < 58))
		return (1);
	else
		return (0);
}
