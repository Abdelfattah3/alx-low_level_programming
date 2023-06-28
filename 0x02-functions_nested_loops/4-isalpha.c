#include "main.h"
#include <stdio.h>

/**
* _isalpha - prints alphabets in order
* @c: input character
* Return: (0) success
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
