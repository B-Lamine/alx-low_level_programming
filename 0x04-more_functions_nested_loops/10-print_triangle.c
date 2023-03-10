#include "main.h"

/**
 * print_triangle - draws a triangle of size @size.
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size == 0 || size < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			j = 0;
			k = size - i - 1;
			while (j < (size - i - 1))
			{
				_putchar(' ');
				j++;
			}
			while (k < size)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
		}
	}
}
