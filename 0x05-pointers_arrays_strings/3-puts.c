#include "main.h"

/**
* _puts - swaps the values of two integers
*
* @str: input paramter
*
* Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
