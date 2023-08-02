#include "main.h"


/**
* _sqrt_recursion - return the square number
* check - checks for the number square number
* @n : the number
* @m : int
* Return: an int
*/

int check(int n, int m);
int _sqrt_recursion(int n)
{
	return (check(n, 1));
}

/**
* check - checks for the number square number
* @n : int
* @m : int
* Return: an int
*/

int check(int n, int m)
{
	if (n == m * m)
		return (m);
	else if (n > m)
		return	(check(n, m + 1));
	else
		return (-1);
}
