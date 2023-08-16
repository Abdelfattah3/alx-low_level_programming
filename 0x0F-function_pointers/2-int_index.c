#include "function_pointers.h"
/**
* int_index - function pointer to print a name
* @array : pointer to an int
* @size :  size of an array
* @cmp : function pointer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	i = 0;
	j = -1;
	if (cmp != NULL && array != 0)
	{
		if (size <= 0)
		{
			return (-1);
		}
		while (i < size)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
			i++;
		}
	}
	return (j);
}
