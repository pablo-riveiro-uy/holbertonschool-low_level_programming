#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;

	while (i < ht->size)
	{
	while (node != NULL)
	{
		node = ht->array[i];
		free(ht->array[i]->key);
		free(ht->array[i]->value);
		free(ht->array[i]);
		ht->array[i] = node;
	}
	i++;
	}
	free(ht->array);
	free(ht);
}
