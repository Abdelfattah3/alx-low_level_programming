#include "main.h"
/**
* set_bit -  sets the value of a bit to 1 at a given index
* @n : pointer to the number
* @index : the index of the number
* Return: 1 if successfully or -1 in failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;
	unsigned int i = sizeof(unsigned long int) * 8;

	if (index >= i)
	{
		return (-1);
	}
	m = 1 << index;
	*n = m | *n;
	return (1);
}
