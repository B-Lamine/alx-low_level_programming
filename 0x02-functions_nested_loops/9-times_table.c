#include "main.h"

/**
 * times_table - displays multiplication table.
 */
void times_table(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			if ((a * b) / 10 != 0)
				_putchar((a * b) / 10 + '0');
			else if (b != 0)
				_putchar(' ');
			_putchar((a * b) % 10 + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
