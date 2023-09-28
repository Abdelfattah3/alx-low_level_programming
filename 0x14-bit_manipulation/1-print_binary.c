#include "main.h"
/**
* print_binary - prints binary rep
* @n: the number to be converted
*/
void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary(n >> 1);
	if (n & 1)
	{
		_putchar(49);
	}
	else
	{
		_putchar(48);
	}
}
