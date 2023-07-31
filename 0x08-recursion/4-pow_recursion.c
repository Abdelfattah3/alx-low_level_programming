#include "main.h"
#include <string.h>

/**
* _pow_recursion - prints out the length of a string
* @x : integer
* @y : integer
* Return: an int of a given number
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
