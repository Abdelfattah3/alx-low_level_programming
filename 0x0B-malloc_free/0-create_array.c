#include "main.h"

/**
* create_array - creates an array
* @size : int
* @c : character
* Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	while (*a)
	{
		return (*a);
	}
	*a = c;
	return (*a);
}

