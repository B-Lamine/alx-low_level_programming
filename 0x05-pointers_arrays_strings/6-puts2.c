#include "main.h"

/**
  * puts2 - displays a string and skipping a character after every step.
  * @str: address of the string.
  */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
