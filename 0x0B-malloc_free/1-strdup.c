#include <stdlib.h>
#include "main.h"

/**
  * _strlen - counts the number of characters in a string.
  * @s: pointer to an array of characters.
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
  * _strdup - copy a given string into new memory space.
  * @str: string to be copied.
  *
  * Return: address of the new memory space with the copy of the string.
  */
char *_strdup(char *str)
{
	int i, len;
	char *s;

	len = _strlen(str);
	i = 0;
	s = malloc(sizeof(char) * len);
	while (i < len)
	{
		*(s + i) = *(str + i);
		i++;
	}
	return (s);
}
