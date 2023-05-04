#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sums all of any number of integer input.
  * @n: number of arguments passed.
  * Return: the sum of the arguments, or 0 if none are passed.
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
