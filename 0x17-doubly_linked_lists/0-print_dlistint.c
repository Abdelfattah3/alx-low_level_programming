#include "lists.h"

/**
 * print_dlistint - print list
 * @h: head pointer point to first node
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *trv = h;
	size_t n = 0;

	while (trv)
	{
		printf("%d\n", trv->n);
		trv = trv->next;
		n++;
	}
	return (n);
}
