#include "main.h"
#include <string.h>

/**
* _strlen_recursion - prints out the length of a string
* @s : string
* Return: an int of the number of the string length
*/


int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1  +  _strlen_recursion(s + 1));
}
