#include "main.h"
#include <stdio.h>

/**
* main - entry
* print_alphabet - prints alphabets in order
* Return: 0 (success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
