#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: the table size
* Return: a pointer to the table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;

	h = malloc(sizeof(hash_table_t));
	if (!h)
	{
		free(h);
		return (NULL);
	}
	h->size = size;
	h->array = malloc(sizeof(hash_node_t *) * size);
	return (h);
}
