#include "main.h"

/**
* print_array - swaps the values of two integers
*
* @a: input paramter
* @n: input paramter
*
* Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);

	}
	printf("\n");
}
