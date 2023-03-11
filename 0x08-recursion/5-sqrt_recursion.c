#include "main.h"

/**
  * _sqrt - tests if @x is square root of @n.
  * @n: initial integer.
  * @x: square root.
  *
  *Return: square root if found and natural, otherwise -1.
  */
int _sqrt(int n, int x)
{
	if (x == 1)
		return (-1);
	else if ((n / x) == x && (n % x) == 0)
		return (x);
	x--;
	return (_sqrt(n, x));
}

/**
  * _sqrt_recursion - computes square root of a number.
  * @n: initial integer.
  *
  * Return: square root if found and natural, otherwise -1.
  */
int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	x = n / 2;
	return (_sqrt(n, x));
}
