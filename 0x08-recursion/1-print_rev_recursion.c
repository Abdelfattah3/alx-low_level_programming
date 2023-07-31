#include "main.h"
#include <string.h>

/**
* _print_rev_recursion - prints a string in reverse
* @s : string
* Void
*/


void _print_rev_recursion(char *s)
{
	if (*s == s[(strlen(s))])
		_putchar(s[strlen(s)]);
	_print_rev_recursion(s++);
}
