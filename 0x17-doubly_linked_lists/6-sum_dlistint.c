#include "lists.h"

/**
 * sum_dlistint - sum of all the data
 *
 * @head: point to the first node
 *
 * Return: sum  or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *trv = head;
	int sum = 0;

	while (trv)
		sum += trv->n, trv = trv->next;

	return (sum);
}
