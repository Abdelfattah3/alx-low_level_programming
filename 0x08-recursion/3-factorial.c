#include "main.h"

/**
* factorial - prints string
* @n : int
* Return: int factorial
*/

int factorial(int n)
{
	if (n == 1)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}
