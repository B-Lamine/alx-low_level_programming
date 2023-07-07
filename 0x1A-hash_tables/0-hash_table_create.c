#include "hash_tables.h"

/**
  * hash_table_create - create a hash table of given @size.
  * @size: size of the hash table.
  *
  * Return: address of hash table, Null otherwise.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = (hash_node_t **)calloc(ht->size, sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);
	return (ht);
}
