#include "hash_tables.h"
/**
 * key_index - give the index for a key in h table of size given
 * @key: a key to store a value
 * @size: lenght of table
 * Return: index where to store key and value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
		return (index);
}
