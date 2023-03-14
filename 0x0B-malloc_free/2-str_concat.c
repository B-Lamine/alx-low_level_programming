#include "main.h"
#include <stdlib.h>

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
  * str_concat - concatenates two given strings.
  * @s1: 1st string to concatenate.
  * @s2: 2nd string to concatenate.
  *
  * Return: address to concatenation result, or NULL in case it fails.
  */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *s;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	s = malloc(sizeof(char) * (len1 + len2));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < (len1 + len2))
	{
		if (i < len1)
		{
			if (s1 == NULL)
				s1 = "";
			*(s + i) = *(s1 + i);
		}
		else
		{
			if (s2 == NULL)
				s2 = "";
			*(s + i) = *(s2 + i - len1);
		}
		i++;
	}
	return (s);
}
