#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * alloc_grid - create a 2D array an initializes its elements to zero.
  * @width: number of columns.
  * @height: number of rows.
  *
  * Return: a double pointer to a 2D if successful, otherwise NULL.
  */
int **alloc_grid(int width, int height)
{
	int i, j, size;
	int **pp;

	pp = (int **) malloc(sizeof(*pp) * height);
	i = 0;
	while (i < width)
	{
		pp[i] = malloc(sizeof(int) * width);
		i++;
	}
	if (pp == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		j = 0;
		if (j < width)
		{
			*(*(pp + i) + j) = 0;
			j++;
		}
		i++;
	}
	return (pp);
}
