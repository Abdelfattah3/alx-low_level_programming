#include "main.h"

/**
* _isdigit - checks if the alphabet is uppercase or not
* @c: input character
* Return: 1 if uppercase 0 if lowercase
*/

int _isdigit(int c)
{

	if (c >= 65 && c <= 90) && (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

