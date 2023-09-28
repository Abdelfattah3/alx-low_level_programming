#include "main.h"
/**
* binary_to_uint - transform form binary to decimal
* @b: the binary form string
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, i;

	if (!b)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != 48 && *b != 49)
		{
			return (0);
		}
		b++;
	}
	b--;
	sum = 0;
	for (i = 0; i < strlen(b); i++, b--)
	{
		if (*b & 1)
		{
			sum += (1 << i);
		}
	}
	return (sum);
}
