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
  * _strstr - searches for a string in another.
  * @haystack: string to be searched.
  * @needle: string to be found.
  *
  * Return: adress of the first occurence of the substring or else NULL.
  */
char *_strstr(char *haystack, char *needle)
{
	int j, k, n, len1, len2;

	len1 = _strlen(needle);
	len2 = _strlen(haystack);
	j = 0;
	while (j < len2)
	{
		if (*needle == *(haystack + j))
		{
			n = 0;
			k = 0;
			while (k < len1)
			{
				if (*(needle + k) == *(haystack + j + k))
					n++;
				else
					break;
				k++;
			}
			if (n == len1)
				return (haystack + j);
		}
		j++;
	}
	return (0);
}
