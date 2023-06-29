#include <stdio.h>
#include "main.h"

/**
* print_number - Concatenates two strings
* @n: string 1
* Return: 1 if true 0 if false
*/

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
