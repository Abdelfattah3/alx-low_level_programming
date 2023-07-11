#include "main.h"

/**
* more_numbers - checks if the alphabet is uppercase or not
*/

void more_numbers(void)
{
	int i;
	int j;
	int num;

	for (j = 0; j < 10; j++)
		for (i = 0; i <= 14 ; i++)
		{
			i = num;
			if (num > 9)
			{
				_putchar(1 + '0');
				num = i % 10;
			}
			_putchar(num + '0');
		}
	_putchar('\n');
}

