#include "main.h"
#include <string.h>

/**
* _sqrt_recursion - prints out the length of a string
* @n : integer
* @val : number
* Return: an int of a given number
*/

int _sqrtvalue(int n, int val);
int _sqrt_recursion(int n)
{
	return (_sqrtvalue(n, 1));
}


/**
* _sqrtvalue - gives the root square
* @n : integer
* @val : number
* Return: the vlue of square root
*/

int _sqrtvalue(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (_sqrtvalue(n, val + 1));
	else
		return (-1);
}
