#include "main.h"
#include <stdio.h>

/**
* times_table - prints alphabets in order
* Example table
* 0, 0, 0, 0, ,,
* 0, 1, 2, 3, ,,
*
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		for (mult = 1; mult <= 9; mult++)
		{
			prod = num * mult;

			if ((prod / 10) > 0)
			{
				_putchar((prod / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
				_putchar((prod % 10) + 48); 
				if (prod < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
		}
		_putchar('\n');
	}
}
