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

	i = 0;
	if (s == NULL)
		return (0);
	while (*(s + i) != '\0')
		i++;
	return (i);

}

/**
  * string_nconcat - concatenates first @n cahracters of @s2 to end of @s1.
  * @s1: first string.
  * @s2: second string.
  * @n: number of characters of @s2 to concat.
  *
  * Return: address of concatented string.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	ptr = malloc(sizeof(*s1) * len1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len1 + n + 1)
	{
		if (i < len1)
			*(ptr + i) = *(s1 + i);
		else
		{
			if (i >= len1 + len2)
				*(ptr + i) = ' ';
			else
				*(ptr + i) = *(s2 + i - len1);
		}
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
