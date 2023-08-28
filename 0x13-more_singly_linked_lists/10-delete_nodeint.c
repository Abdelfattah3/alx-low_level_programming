#include "lists.h"
#include <stdlib.h>
/**
* delete_nodeint_at_index -  deletes a node at specific index
* @head : double pointer to the head of the list
* @index : index of the node
* Return: int 1 successfully or -1 failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *rp, *rw;
	unsigned int i;

	if (!head || !*head)
	{
		return (-1);
	}
	rp = *head;
	rw = NULL;
	i = 0;
	if (i == index)
	{
		*head = rp->next;
		free(rp);
		return (1);
	}
	while (rp && i < index)
	{
		rw = rp;
		rp = rp->next;
		i++;
	}
	if (!rp || i < index)
	{
		return (-1);
	}
	rw->next = rp->next;
	free(rp);
	return (1);
}
