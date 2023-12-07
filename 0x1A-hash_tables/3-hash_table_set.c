#include "hash_tables.h"
/**
* hash_table_set - inserts inside the hash
* @ht: the table size
* @key: pointer to the key
* @value: pointer to the value
* Return: 1 in success or 0 in failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int vl = 0;
	hash_node_t *nd, *to;

	if ((unsigned char *)key == NULL || !ht || !value)
	{
		return (0);
	}
	vl = key_index((unsigned char *)key, ht->size);
	to = ht->array[vl];
	while (to)
	{
		if (strcmp(to->key, key) == 0)
		{
			free(to->value);
			to->value = strdup(value);
			if (to->value == NULL)
			{
				free(to->value), return (0);
			}
			return (1);
		}
		to = to->next;
	}
	nd = malloc(sizeof(hash_node_t) * 1);
	if (nd == NULL)
	{
		return (0);
	}
	nd->key = strdup(key), nd->value = strdup(value);
	nd->next = NULL;
	if (nd->key == NULL && nd->value == NULL)
	{
		free(nd->key);
		free(nd->value);
		free(nd);
		return (0);
	}
	nd->next = ht->array[vl];
	ht->array[vl] = nd;
	return (1);
}
