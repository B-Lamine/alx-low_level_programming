#include <stdio.h>

/**
 * main - print single digits in base 10
 *
 * Return: 0 is code successful
 */
int main(void)
{
	int d = 48, i;

	while (d <= 57)
	{
		for (i = 0; i < 10; i++)
		{
			putchar(d + i);
		}
		d++;
	}
	putchar('\n');
	return (0);
}
