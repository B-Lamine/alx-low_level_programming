#include "main.h"

/**
 * print_alphabet_x10 - prints 10 lines of the lower case alphabets.
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char i;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		j++;
	}
}
