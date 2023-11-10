#include "lists.h"

/**
 * get_dnodeint_at_index - get node
 *
 * @head: head pointer point to first node
 * @index: index is the index of the node, starting from 0
 *
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trv = head;
	size_t n = 0;

	while (trv)
	{
		if (n == index)
			return (trv);
		trv = trv->next, n++;
	}
	return (NULL);
}
