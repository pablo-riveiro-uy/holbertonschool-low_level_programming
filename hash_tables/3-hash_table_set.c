#include "hash_tables.h"
/**
 * hash_table_set - set an item in a hash table
 * @ht: hash table
 * @key: pointer to a key
 * @value: value to store under a key
 *
 * Return: 1 on success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *currNode;
	unsigned long int index;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	currNode = ht->array[index];

	if (currNode && strcmp(key, currNode->key) == 0)
	{
		free(currNode->value);
		currNode->value = strdup(value);
		return (1);
	}

	item = malloc(sizeof(hash_node_t));
	if (item  == NULL)
		return (0);

	item->key = strdup(key);
		if (item->key == NULL)
			return (0);
	item->value = strdup(value);
		if (item->value == NULL)
			return (0);
	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}
