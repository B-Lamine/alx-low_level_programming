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
  * _strspn - counts the number of characters in @s that are also in @accept.
  * @s: pointer to initial string.
  * @accept: pointer to string of accepted characters.
  *
  * Return: number of accepted characters.
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, len1, len2;
	unsigned int n;

	len1 = _strlen(s);
	len2 = _strlen(accept);
	i = 0;
	n = 0;
	while (i <= len1)
	{
		j = 0;
		while (j <= len2)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 0;
				while (k < i)
				{
					if (*(s + i) == *(s + k))
					{
						n--;
						break;
					}
					k++;
				}
				n++;
				break;
			}
			j++;
		}
		i++;
	}
	return (n);
}
