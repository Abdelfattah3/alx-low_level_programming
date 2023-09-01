#include "main.h"
/**
* binary_to_uint - convert a binary number to int
* @b : pointer to a string
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int a = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		b++;
	}
	b--;
	for (i = 0; *b; b--, i++)
	{
		if (*b == '1')
		{
			a += (1 << i);
		}
	}
	return (a);
}
