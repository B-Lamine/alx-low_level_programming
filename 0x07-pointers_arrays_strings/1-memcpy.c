#include "main.h"

/**
  * _memcpy - copies @n bytes of memory at @src to memory at @dest.
  * to by @s.
  * @src: pointer to memory to be copied.
  * @dest: pointer to memory where copy is stored.
  * @n: number of bytes to be copied.
  *
  * Return: pointer to the copy.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
