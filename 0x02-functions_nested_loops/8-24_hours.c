#include "main.h"

/**
 * jack_bauer - displays minutes count from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int h2 = 0;

	while (h2 < 10)
	{
		int h1 = 0;

		while (h1 < 10)
		{
			int m2 = 0;

			while (m2 < 6)
			{
				int m1 = 0;

				while (m1 < 10)
				{
					_putchar(h2 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m2 + '0');
					_putchar(m1 + '0');
					_putchar('\n');
					m1++;
				}
				m2++;
			}
			if (h2 == 2 && h1 == 3)
				return;
			h1++;
		}
		h2++;
	}
}
