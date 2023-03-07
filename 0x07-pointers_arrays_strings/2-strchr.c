#include "main.h"
#include <stddef.h>

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
  * _strchr - searches character @c in string @s.
  * @s: pointer to string.
  * @c: character to be searched.
  *
  * Return: address of @c, if found, or else NULL.
  */
char *_strchr(char *s, char c)
{
	int i, len;

	len = _strlen(s);
	i = 0;
	while (i < len)
	{
		if (*(s + i) == c)
			return (s + i);
		else
			i++;
	}
	return (NULL);
}
