#include "hash_tables.h"

/**
  * hash_table_set - insert @key, @value pair to hash table @ht.
  * @ht: pointer to hash table.
  * @key: string key.
  * @value: strin value corresponding to @key.
  *
  * Return: 1 on success, 0 otherwise.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *ht_node, *cursor, *last_node, *new_node;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	ht_node = ht->array[index];
	if (ht_node == NULL)
	{
		ht_node->key = strdup(key);
		ht_node->value = strdup(value);
		ht_node->next = NULL;
		return (1);
	}
	cursor = ht->array[index];
	while (cursor != NULL)
	{
		if (strcmp(cursor->key, key) == 0)
		{
			cursor->key = strdup(key);
			return (1);
		}
		last_node = cursor;
		cursor = cursor->next;
	}
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	last_node->next = new_node;
	return (1);
}
