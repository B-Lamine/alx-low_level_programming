#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers from input to 98 in corresponding order.
 * @n: initial number.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = 0; i < (98 - n); i++)
			printf("%d, ", (n + i));
	if (n > 98)
		for (i = 0; i < (n - 98); i++)
			printf("%d, ", (n - i));
	printf("%d\n", 98);
}
