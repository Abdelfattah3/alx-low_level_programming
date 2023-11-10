#include "lists.h"

/**
 * delete_dnodeint_at_index - delete at index
 *
 * @head: head pointer point to first node
 * @index: idx of node you want to insert
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *trv = *head;
	size_t i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = trv->next;
		if (trv->next)
			trv->next->prev = NULL;
		free(trv);
		return (1);
	}

	while (i != index - 1 && trv)
	{
		trv = trv->next;
		i++;
	}
	if (!trv || !trv->next)
		return (-1);
	if (trv->next->next)
	{
		trv->next = trv->next->next;
		free(trv->next->prev);
		trv->next->prev = trv;
		return (1);
	}
	else
	{
		free(trv->next);
		trv->next = NULL;
		return (1);
	}
	return (-1);

}
