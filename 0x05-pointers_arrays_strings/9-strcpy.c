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
  * _strcpy - takes a string and copies it to a buffer.
  * @dest: buffer address.
  * @src: string to be copied.
  *
  * Return: address to the buffer.
  */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	i = 0;
	len = _strlen(src);
	while (i <= len)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
