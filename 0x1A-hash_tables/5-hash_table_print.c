#include "hash_tables.h"
/**
* hash_table_print - prints hash table
* @ht: the table size
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int p = 0;

	printf("{");
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			if (p > 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			p++;
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	printf("}\n");
}
