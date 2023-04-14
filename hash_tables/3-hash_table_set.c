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
	hash_node_t *item;

	if (*hey == "")
		return (0);
	item = malloc(sizeof(hash_node_t))
	item->key[key_index(key) = key];
	item->value[key_index(key) = value];
	*ht = item;

	return (1);
}
