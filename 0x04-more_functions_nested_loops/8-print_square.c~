#include "main.h"

/**
 * print_diagonal - draws a diagonal line to the stdout of length n times \.
 * @n: length of the diagonal in terms of '\'
 */
void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
