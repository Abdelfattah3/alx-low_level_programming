#include "main.h"
#include <stdio.h>

/**
* _islower - prints alphabets in order
* @c: input character
* Return: (0) success
*/

int _islower(int c)
{
	if (c >= 97 && c <= 127)
		return (1);
	return (0);
}
