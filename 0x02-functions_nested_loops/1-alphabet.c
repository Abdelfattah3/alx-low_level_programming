#include "main.h"
#include <stdio.h>

/**
* print_alphabet - prints alphabets in order
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
