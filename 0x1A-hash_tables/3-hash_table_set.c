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
	unsigned long int ky = 0;
	unsigned long int vl = 0;
	hash_node_t *nd;

	if ((unsigned char *)key == NULL)
	{
		return (0);
	}
	nd = malloc(sizeof(hash_node_t));
	if (!nd)
	{
		free(nd);
		return (0);
	}
	nd->key = strdup(key);
	nd->value = strdup(value);
	nd->next = NULL;
	vl = key_index((unsigned char *)key, ky);
	if (ht->array[vl])
	{
		nd->next = ht->array[vl];
	}
	ht->array[vl] = nd;
	return (1);
}
