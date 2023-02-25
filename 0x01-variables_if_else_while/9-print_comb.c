#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
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
