#include "main.h"

/**
 * _islower - checks if character is lower case.
 * @c: input character to be checked.
 *
 * Return: 1 if character is lower case;
 * 0 if upper case.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
