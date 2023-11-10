#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head pointer point to first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nod = head;

	if (!head)
		return;
	while (nod->next)
		nod = nod->next, free(nod);
	free(head);
}
