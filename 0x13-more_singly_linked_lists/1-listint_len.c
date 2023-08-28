#include "lists.h"
/**
* listint_len - counts elements in a list
* @h : pointer to the head of the list
* Return: the number of the nodes of the list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
