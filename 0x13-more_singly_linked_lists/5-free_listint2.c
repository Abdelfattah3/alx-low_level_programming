#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - frees a list
* @head : double pointer to the head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *ro;

	while (*head)
	{
		ro = (*head)->next;
		free(*head);
		*head = ro;
	}
}
