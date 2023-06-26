#include "main.h"

/**
* swap - swaps the values of two integers
*
* @a: int paramter
* @b; int paramter
*
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
