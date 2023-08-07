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
	char *a;
	a = malloc(size);
	
	if(size == 0 || *a == 0)
		return (0);
	while(size--)
		a[size] = c;
	return (a);
}
