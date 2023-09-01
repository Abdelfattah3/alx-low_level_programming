#include "main.h"
/**
* count_binary - prints the binary representation of a number
* @n : the number
* Return: the count of the binary bits
*/
unsigned int count_binary(unsigned long int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (1 + count_binary(n >> 1));
}
/**
* get_bit - gets the value of a bit at a given index
* @n : the number
* @index : the index number
* Return: the value of a bit at a given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = count_binary(n);

	if (index >= i)
	{
		return (-1);
	}
	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
