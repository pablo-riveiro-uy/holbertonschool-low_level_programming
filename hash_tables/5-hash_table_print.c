
#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cNode;
	int printing = 0;
	unsigned long int i = 0;

	if (ht == NULL)
		exit(0);

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			cNode = ht->array[i];
			while (cNode != NULL)
			{
				cNode = ht->array[i];
				if (printing > 0)
					printf(", ");
				printf("\'%s\'i:\'%s\'", cNode->key, cNode->value);
				cNode = cNode->next;
				printing++;
			}
		}
	}
	printf("}\n");
}
