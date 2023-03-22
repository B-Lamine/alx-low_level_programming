#include "function_pointers.h"

/**
  * int_index - searches a given array for an integer using function cmp.
  * @array: array of integers,
  * @size: array's size,
  * @cmp: function for identifying integer.
  * Return: the index of the desired integer in the array if found, -1 if not.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
