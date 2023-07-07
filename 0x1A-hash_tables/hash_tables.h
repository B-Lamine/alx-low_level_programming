#ifndef HT
#define HT
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
  * struct hash_node_s - node of a hash table.
  *
  * @key: string key, which should be unique.
  * @value: string value corresponding to @key.
  * @next: pointer to next chained node.
  */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
  * struct hash_table_s - hash table data structure.
  *
  * @size: size of the hash table.
  * @array: an array of pointers to nodes of hash table, for easier use of
  * chaining to handle collisions.
  */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);

#endif /* #ifndef HT */
