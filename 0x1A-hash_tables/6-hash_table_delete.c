#include "hash_tables.h"
/**
* hash_table_delete - deletes hash table
* @ht: the table size
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *s, *p;
	unsigned long int i = 0;

	if (ht == NULL)
	{
		return;
	}
	while (i < ht->size)
	{
		s = ht->array[i];
		while (s != NULL)
		{
			p = s->next;
			free(s->key);
			free(s->value);
			free(s);
			s = p;
		}
		ht->array[i] = NULL;
		i++;
	}
	free(ht->array);
	free(ht);
}
