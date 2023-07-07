#include "hash_tables.h"
#include <stdio.h>

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
	hash_node_t *cursor, *last_node, *new_node;

	if (ht == NULL || key == NULL)
		return (0);
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		printf("key:%s\tvalue:%s\n", ht->array[index]->key, ht->array[index]->value);
		return (1);
	}
	last_node = ht->array[index];
	cursor = ht->array[index];
	while (cursor != NULL)
	{
		printf("key:%s\tvalue:%s\n", cursor->key, cursor->value);
		if (strcmp(cursor->key, key) == 0)
		{
			cursor->key = strdup(key);
			cursor->value = strdup(value);
			printf("key:%s\tvalue:%s\n", cursor->key, cursor->value);
			return (1);
		}
		last_node = cursor;
		cursor = cursor->next;
	}
	last_node->next = new_node;
	printf("key:%s\tvalue:%s\n", last_node->key, last_node->value);
	return (1);
}
