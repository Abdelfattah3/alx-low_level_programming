#include "lists.h"

/**
 * add_dnodeint_end - add node
 *
 * @head: head pointer point to first node
 * @n: value of new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *trv = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (trv->next)
			trv = trv->next;
		trv->next = new;
		new->prev = trv;
	}

	return (new);
}
