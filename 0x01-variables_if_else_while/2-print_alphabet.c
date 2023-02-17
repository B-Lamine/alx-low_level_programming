#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: 0 if code successful.
 */
int main(void)
{
	char alphbt[26];
	int i, a = 97;

	for (i = 0; i < 26; i++)
	{
		alphbt[i] = a + i;
		putchar(alphbt[i]);
	}
	putchar('\n');
	return (0);
}
