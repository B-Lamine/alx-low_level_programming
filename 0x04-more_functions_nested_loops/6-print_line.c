#include "main.h"

/**
 * print_line - draws a line of length n (times '_') to the stdout.
 *@n: number of times '_' is drawn.
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
