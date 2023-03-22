#include "function_pointers.h"
#include <stddef.h>

/**
  * array_iterator - performs a given action on all elements of a given array.
  * @array: array of integers,
  * @size: the array's size,
  * @action: function to use on array elements.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
