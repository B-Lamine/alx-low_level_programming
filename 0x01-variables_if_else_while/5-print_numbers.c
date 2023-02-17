#include <stdio.h>

/**
 * main - print single digits in base 10
 *
 * Return: 0 is code successful
 */
int main(void)
{
	int d = 0;

	while (d < 10)
		printf("%d", d++);
	putchar('\n');
	return (0);
}
