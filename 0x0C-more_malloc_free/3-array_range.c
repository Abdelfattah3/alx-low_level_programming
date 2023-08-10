#include "main.h"
#include <stdlib.h>
/**
* array_range - allocated memory
* @min : int
* @max : int
* Return: poniter to an array
*/
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	i = 0;
	a =  malloc((min + max + 1) * sizeof(int));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
