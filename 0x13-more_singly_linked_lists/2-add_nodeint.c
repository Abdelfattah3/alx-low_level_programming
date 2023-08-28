#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - adds a new node at the beginning of a list
* @head : double pointer to the head of the list
* @n : the number to be added in the list
* Return: pointer to newly added node in the list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *curr;

	curr = malloc(sizeof(listint_t));
	if (!curr || !head)
	{
		free(curr);
		return (NULL);
	}
	curr->n = n;
	curr->next = *head;
	*head = curr;
	return (curr);
}
