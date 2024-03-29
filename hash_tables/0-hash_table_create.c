#include "hash_tables.h"

/**
 * hash_table_create - creates a h table with hash_table_t format
 *
 * @size: size of table
 * Return: a pointer to the table or NULL on fail.
 */



hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *Mytable = malloc(sizeof(hash_table_t));
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (!Mytable)
		return (NULL);

	Mytable->size = size;
	Mytable->array = malloc(sizeof(hash_node_t *) * size);
	if (Mytable->array == NULL)
	{
		free(Mytable);
		return (NULL);
	}


	for (i = 0; i < size; i++)
		Mytable->array[i] = NULL;


	return (Mytable);
}

