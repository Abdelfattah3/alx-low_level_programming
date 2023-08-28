#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - adds a new node at the end of a list
* @head : double pointer to the head of the list
* @n : the number to be added in the list
* Return: pointer to newly added node in the list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr, *re;

	re = *head;
	curr = malloc(sizeof(listint_t));
	if (!curr || !head)
	{
		free(curr);
		return (NULL);
	}
	curr->n = n;
	curr->next = NULL;
	if (*head == NULL)
	{
		*head = curr;
		return (curr);
	}
	while (re->next)
	{
		re = re->next;
	}
	re->next = curr;
	return (curr);
}
