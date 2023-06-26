#include "main.h"

/**
* print_rev - swaps the values of two integers
*
* @s: input paramter
*
* Return: nothing
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
