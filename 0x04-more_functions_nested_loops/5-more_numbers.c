#include "main.h"

/**
 * more_numbers - prints 10 lines of numbers from 0 to 14.
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
