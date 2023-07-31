#include "main.h"
#include <string.h>

/**
* factorial - prints out the length of a string
* @n : integer
* Return: an int factorial of a given number
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
