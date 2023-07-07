#include "hash_tables.h"

/**
  * hash_table_get - get value corresponding to @key in hash table.
  * @ht: pointer to hash table.
  * @key: string key.
  *
  * Return: value if @key found, otherwise None.
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cursor;

	index = key_index((unsigned char *)key, ht->size);
	cursor = ht->array[index];
	while (cursor != NULL)
	{
		if (strcmp(cursor->key, key) == 0)
			return (cursor->value);
		cursor = cursor->next;
	}
	return (NULL);
}
