#include "main.h"

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
  * _strcmp - compares two strings.
  * @s1: first string to be compared.
  * @s2: second string to be compared.
  * Return: integer sum of the difference betwen each characters'
  * ASCII numbers.
  */
int _strcmp(char *s1, char *s2)
{
	int i, diff, len1, len2;

	i = 0;
	diff = 0;
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		diff = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (diff);
}
