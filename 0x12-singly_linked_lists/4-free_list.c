#include "lists.h"
#include "string.h"
#include <stdlib.h>
/**
* free_list - frees a list from its elments
* @head : pointer to a pointer of the list's head
*/
void free_list(list_t *head)
{
	list_t *ns , *nn;

	if (head == NULL)
	{
		return;
	}
	ns = head;
	while (ns != NULL)
	{
		nn = ns->next;
		free(ns->next);
		free(ns);
		ns = nn;
	}
}
