#include "hash_tables.h"
/**
 * hash_table_get - get the value assigned under a key
 * @ht: hash table
 * @key: pointer to a key
 *
 * Return: value found or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *currNode;
	unsigned long int index;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (strcmp(key, ht->array[index]->key) == 0)
		return (ht->array[index]->value);

	currNode = ht->array[index];
	while (currNode != NULL)
	{
		if (strcmp(currNode->key, key) == 0)
			return (currNode->value);
		currNode = currNode->next;
	}
	return (NULL);
}
