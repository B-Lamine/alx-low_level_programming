#include "hash_tables.h"

/**
  * hash_table_print - print hash table.
  * @ht: pointer to hashtable.
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cursor;
	int flag;

	if (ht == NULL)
		return;
	flag = 0;
	i = 0;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			cursor = ht->array[i];
			while (cursor != NULL)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", cursor->key,
						cursor->value);
				cursor = cursor->next;
				flag = 1;
			}
		}
		i++;
	}
	printf("}\n");
}
