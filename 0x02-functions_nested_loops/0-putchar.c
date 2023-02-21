#include <string.h>
#include "main.h"

/**
 *
 * main - prints str "putchar" to stdout.
 *
 * Return: 0 when code successful.
 */

int main(void)
{
	unsigned int i;
	char cc[10] = {'_','p','u','t','c','h','a','r','\n'};

	for (i = 0; i < strlen(cc); i++)
		_putchar(cc[i]);
	return (0);
}
