#include "hash_tables.h"
/**
* hash_table_print - prints hash table
* @ht: the table size
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (!ht)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (ht->array[i]->next != NULL && i > 0)
			{
				printf(", ");
			}
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	printf("}\n");
}
