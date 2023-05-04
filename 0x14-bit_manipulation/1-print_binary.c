#include "main.h"
#include <stdio.h>

/**
 * print_binary - convert number to binary and print to stdout.
 * @n: number to convert.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask, bits;
	int flag;
	char c;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	bits = sizeof(bits) * 8;
	mask = 1;
	mask = mask << (bits - 1);
	flag = 0;
	while (bits > 0)
	{
		if (flag == 0)
		{
			c = ((n & mask) && mask) + '0';
			if (c == '1')
			{
				_putchar(c);
				flag = 1;
			}
		}
		else
		{
			c = ((n & mask) && mask) + '0';
			_putchar(c);
		}
		mask >>= 1;
		bits--;
	}
}
