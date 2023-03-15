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

	if (s == NULL)
		return (0);
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
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		*(s + i) = *(str + i);
		i++;
	}
	return (s);
}