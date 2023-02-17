#include <stdio.h>

/**
 * main - print single digits in base 16
 *
 * Return: 0 is code successful
 */
int main(void)
{
	int d = 0x30;

	while (d <= 0x66)
	{
		if (d <= 0x39 || d >= 0x61)
			putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
