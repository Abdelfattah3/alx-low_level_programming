#include "main.h"
#include <stdio.h>

/**
* print_sign - prints alphabets in order
* @n: input character
* Return: (0) success
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	}
		if (n == 0)
		{
		_putchar('0');
		return (0);
		}
		if (n < 0)
		{
		_putchar('-');
		return (-1);
		}
	return (1);
}
