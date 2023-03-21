#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new dog.
  * @name: new dog's name,
  * @age: new dog's age,
  * @owner: owner's name.
  * Return: new dog, or else NULL if malloc fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);
	newd->name = name;
	newd->age = age;
	newd->owner = owner;
	return (newd);
}
