#include "lists.h"
#include <stdlib.h>
/**
* get_nodeint_at_index -  gets the node index of a linked list
* @head : pointer to the head of the list
* @index : index of the node
* Return: int to the nth node of a linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ru;
	unsigned int i;

	i = 0;
	ru = head;
	if (!head)
	{
		return (NULL);
	}
	while (ru && i < index)
	{
		ru = ru->next;
		i++;
	}
	if (ru == NULL)
	return (NULL);
	else
	return (ru);
}
