#include "lists.h"
/**
* sum_listint - sums all the elements of the node
* @head : pointer to the head of the node
* Return: int to the sum of the list
*/
int sum_listint(listint_t *head)
{
	listint_t *rt;
	int sum;

	sum = 0;
	if (!head)
	{
		return (sum);
	}
	rt = head;
	while (rt)
	{
		sum += rt->n;
		rt = rt->next;
	}
	return (sum);
}
