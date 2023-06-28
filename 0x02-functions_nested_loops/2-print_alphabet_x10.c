#include "main.h"
#include <stdio.h>

/**
* print_alphabet_x10 - prints alphabets in order
*/

void print_alphabet_x10(void)
{
	int ch;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	}
}
