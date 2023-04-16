#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *dNode = NULL;

	if (!ht)
		return;
	for  (; i < ht->size; i++)
	{
		dNode = ht->array[i];
		while (dNode)
		{
			free(dNode->key);
			free(dNode->value);
			free(dNode);
			dNode = dNode->next;
		}
	}
	free(ht->array);
	free(ht);
}
