#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
* malloc_checked - allocated memory
* @b : unsigned int
* Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *a;

	if (b == INT_MAX)
	{
		exit(98);
	}
	a =  malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
