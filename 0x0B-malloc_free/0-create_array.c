#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array
* @size : int
* @c : character
* Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(size * sizeof(char));
	if (a == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
