#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print whether a random number is positive, negative or null.
 *
 * Return: 0 if code is successful.
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
