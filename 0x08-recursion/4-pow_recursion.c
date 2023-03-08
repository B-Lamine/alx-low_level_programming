#include "main.h"

/**
  * _pow_recursion - computes @x to the power @y.
  * @x: base number.
  * @y: exponent.
  * Return: result or else -1 if exponent is negative.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
