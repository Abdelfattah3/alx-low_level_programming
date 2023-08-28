#include "lists.h"
#include <stdlib.h>
/**
* free_listint - frees a list
* @head : pointer to the head of the list
*/
void free_listint(listint_t *head)
{
	listint_t *ro;

	while (head)
	{
		ro = head->next;
		free(head);
		head = ro;
	}
}
