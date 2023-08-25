#include "lists.h"
#include "string.h"
#include <stdlib.h>
/**
* free_list - frees a list from its elments
* @head : pointer to a pointer of the list's head
*/
void free_list(list_t *head)
{
	list_t *ns;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		ns = head->next;
		free(head->str);
		free(head);
		head = ns;
	}
}
