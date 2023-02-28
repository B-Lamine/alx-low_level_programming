#include "main.h"
int _strlen(char *s);

/**
  * _strlen - counts length of the string.
  * @s: string.
  *
  * Return: length of the string.
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
  * puts_half - prints the last half of a string,
  * excluding the middle character if length of the string is odd.
  * @str: address of the string.
  */
void puts_half(char *str)
{
	int i, length_of_the_string;

	length_of_the_string = _strlen(str);
	if (length_of_the_string % 2 == 0)
		i = length_of_the_string / 2;
	else
		i = (length_of_the_string + 1) / 2;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
