#include <stdio.h>

/**
 * main - print single digits in base 10
 *
 * Return: 0 is code successful
 */
int main(void)
{
	int d = 48;

	while (d <= 57)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
