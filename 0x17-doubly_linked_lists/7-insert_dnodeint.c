#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: head pointer point to first node
 * @idx: idx of node you want to insert
 * @n: value of node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *trv = *h, *tmp = NULL;
	size_t i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; i != idx - 1; i++)
	{
		if (!trv)
			return (NULL);
		trv = trv->next;

	}
	if (trv->next == NULL)
	{
		trv->next = new;
		new->prev = trv;
		return (new);
	}
	tmp = trv->next;
	trv->next = new;
	tmp->prev = new;
	new->prev = trv;
	new->next = tmp;
	return (new);
}
