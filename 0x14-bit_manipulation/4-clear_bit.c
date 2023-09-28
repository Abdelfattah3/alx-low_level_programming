#include "main.h"
/**
* clear_bit - sets the bit to number
* @n : the number
* @index : the index of the number
* Return: 1 if worked
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8 || !n)
	{
		return (-1);
	}
	*n = *n & (~(1 << index));
	return (1);
}
