#include "function_pointers.h"
/**
* array_iterator - function pointer to print a name
* @array : pointer to an int
* @size :  size of an array
* @action : function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (action != NULL && size > 0 && array != 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}

	}
}
