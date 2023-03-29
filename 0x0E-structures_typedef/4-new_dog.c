#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - counts length of the string.
  * @s: string.
  *
  * Return: length of the string.
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
  * _strcpy - takes a string and copies it to a buffer.
  * @dest: buffer address.
  * @src: string to be copied.
  *
  * Return: address to the buffer.
  */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	i = 0;
	len = _strlen(src);
	while (i <= len)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

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
	char *nme, *onr;
	float a;
	int name_len, owner_len;

	a = age;
	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);
	name_len = _strlen(name);
	nme = malloc(sizeof(*nme) * (name_len + 1));
	if (nme == NULL)
	{
		free(newd);
		return (NULL);
	}
	owner_len = _strlen(owner);
	onr = malloc(sizeof(*onr) * (owner_len + 1));
	if (owner == NULL)
	{
		free(nme);
		free(newd);
		return (NULL);
	}
	newd->name = _strcpy(nme, name);
	newd->age = a;
	newd->owner = _strcpy(onr, owner);
	return (newd);
}
