#include "lists.h"
#include <stdlib.h>
/**
* pop_listint -  deletes the head node of a linked list
* @head : double pointer to the head of the list
* Return: int to the head node’s data
*/
int pop_listint(listint_t **head)
{
	listint_t *rm;
	int i;

	if (!*head || !head)
	{
		return (0);
	}
	rm = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = rm;
	return (i);
}
