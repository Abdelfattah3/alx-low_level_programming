#include "main.h"
/**
* get_bit - gets the bit at index
* @n : the number
* @index : the index of the number
* Return: the value of the index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		n = n >> 1;
		i++;
	}
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	else
	{
		if ((n & 1) == 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
