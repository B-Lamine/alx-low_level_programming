#include "main.h"

/**
  * swap_int - swaps the values of two integers.
  * @a: pointer to first integer's address,
  * @b: pointer to second integer's address.
  */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
