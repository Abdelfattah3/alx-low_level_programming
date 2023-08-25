#include "lists.h"
/**
* print_list - prints the elemnets of a list
* @h : pointer to the head of the list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	if (h == NULL)
	{
		return (NULL);
	}
	if (h->next == NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		return (1);
	}
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
		printf("[%d] %s\n", h->len, h->str);
	return (1 + print_list(h->next));
}
