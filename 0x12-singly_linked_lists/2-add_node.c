#include "lists.h"
#include "string.h"
#include <stdlib.h>
/**
* add_node - adds a node to a list
* @head : pointer to a pointer of the list's head
* @str : string to be added to the node elements
* Return: pointer to the added node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup;

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
	new->next = *head;
	*head = new;
	return (new);
}
