#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - free allocated memory to given dog.
  * @d: pointer to dog struct.
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
