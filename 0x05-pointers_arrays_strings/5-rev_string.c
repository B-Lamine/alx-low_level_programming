#include <stdio.h>
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
  * rev_string - reverses a string of characters.
  * @s: address to the string.
  */
void rev_string(char *s)
{
	int i, len;
	char c;

	i = 0;
	len = _strlen(s);
	while (i < (len + 1) / 2)
	{
		c = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = c;
		i++;
	}
}
