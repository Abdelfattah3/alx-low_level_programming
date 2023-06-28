#include "main.h"
#include <stdio.h>

/**
* times_table - prints alphabets in order
* Return: (0) success
*/

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;
			if (c <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
