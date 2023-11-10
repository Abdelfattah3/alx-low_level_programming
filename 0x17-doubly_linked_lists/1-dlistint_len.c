#include "lists.h"

/**
 * dlistint_len - print list
 * @h: head pointer point to first node
 * Return: Number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *trv = h;
	size_t n = 0;

	while (trv)
		trv = trv->next, n++;

	return (n);
}
