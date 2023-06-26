#include "main.h"

/**
* swap_int - swaps the values of two integers
*
* @a: input paramter
* @b: input paramter
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
