#include "main.h"
/**
* flip_bits - counts the number of bits you would need to be fliped
* @n : the number which bits will be fliped
* @m : the other number
* Return: the number of bits you would need to be fliped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
