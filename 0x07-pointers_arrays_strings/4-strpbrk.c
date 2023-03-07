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
  * _strpbrk - find address of first occurence of any byte of @accept in @s.
  * @s: string to be searched.
  * @accept: bytes to search for in @s.
  *
  * Return: address of first byte found.
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j, len1, len2;

	len1 = _strlen(s);
	len2 = _strlen(accept);
	i = 0;
	while (i < len1)
	{
		j = 0;
		while (j < len2)
		{
			if (*(s + i) == *(accept + j))
				return ((s + i));
			j++;
		}
		i++;
	}
	return (0);
}
