#include "main.h"

/**
  * _memset - fills with character @b the @n first bytes of the memory pointer
  * to by @s.
  * @s: pointer to memory area.
  * @b: byte to set memory to.
  * @n: number of bytes to be set.
  *
  * Return: pointer to the memory area.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
