#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
  * init_dog - initializes a struct dog by the given arguments.
  * @d: address of the struct,
  * @name: dog's name,
  * @age : dog's age,
  * @owner: owner's name.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
