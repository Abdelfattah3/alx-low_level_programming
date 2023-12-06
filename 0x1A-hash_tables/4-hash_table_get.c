#include "hash_tables.h"
/**
* hash_table_get - gets the value of an item
* @ht: the table size
* @key: pointer to the key
* Return: pointer to the item
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *v = NULL;
	unsigned long int m;

	if ((unsigned char *)key == NULL || !ht)
	{
		return (NULL);
	}
	m = key_index((unsigned char *)key, ht->size);
	if (ht->array[m] == NULL)
	{
		return (NULL);
	}
	while (ht->array[m] != NULL)
	{
		if (strcmp(key, ht->array[m]->key) == 0)
		{
			v = ht->array[m]->value;
			break;
		}
		ht->array[m] = ht->array[m]->next;
	}
	return (v);
}
