#include <stdio.h>
#include "main.h"

/**
  * print_array - displays elements of an array.
  * @a: pointer to the array.
  * @n: number of elements to be displayed.
  */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
}
