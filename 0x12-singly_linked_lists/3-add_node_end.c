#include "lists.h"
#include "string.h"
#include <stdlib.h>
/**
* add_node_end - adds a node to a list
* @head : pointer to a pointer of the list's head
* @str : string to be added to the node elements
* Return: pointer to the added node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *cur;
	char *dup;

	cur = *head;
	if (str == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL || dup == NULL)
	{
		free(new);
		free(dup);
		return (NULL);
	}

	new->str = dup;
	new->len = strlen(dup);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = new;
	return (new);
}
