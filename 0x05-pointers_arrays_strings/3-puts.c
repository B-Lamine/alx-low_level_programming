#include "main.h"

/**
  * _puts - displays a string of characters to the standard output.
  * @str: address to the string.
  */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
