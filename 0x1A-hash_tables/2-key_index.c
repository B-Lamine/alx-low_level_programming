#include "hash_tables.h"

/**
  * key_index - generate index corresponding to @key string, according to djb2
  * algorithm.
  * @key: key string.
  * @size: size of the hash table.
  *
  * Return: index
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2((unsigned char *)key);
	return (index % size);
}
