#include "main.h"

/**
  * factorial - computes factorial of a given number.
  * @n: factorial to be calculated.
  * Return: integer result of the factorial or -1 if initial number
  * is negative.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
