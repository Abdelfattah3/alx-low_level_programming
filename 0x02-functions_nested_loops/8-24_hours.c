#include "main.h"
#include <stdio.h>

/**
* jack_bauer - prints alphabets in order
* @n: input character
* Return: (0) success
*/

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0;min <= 59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
