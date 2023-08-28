#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head : double pointer to the head of the list
* @idx : index of the node
* @n : the number to be added
* Return: pointer to the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ri, *ry;
	unsigned int i;

	if (!*head || !head)
	{
		return (NULL);
	}
	ry = malloc(sizeof(listint_t));
	if (!ry)
	{
		free(ry);
		return (NULL);
	}
	ry->n = n;
	ri = *head;
	i = 0;
	if (i == idx)
	{
		ry->next = *head;
		*head = ry;
		return (ry);
	}
	while (ri && i < (idx - 1))
	{
		ri = ri->next;
		i++;
	}
	if (!ri || (i + 1) < idx)
	{
		free(ry);
		return (NULL);
	}
	ry->next = ri->next;
	ri->next = ry;
	return (ry);
}
