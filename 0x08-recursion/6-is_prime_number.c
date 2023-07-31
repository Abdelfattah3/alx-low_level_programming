#include "main.h"
#include <string.h>

/**
* is_prime_number - prints out the length of a string
* @n : integer
* @othr : int
* Return: an int of a given number
*/

int check_prime(int n, int othr);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
* check_prime - checks the prime nums
* @n: integer
* @othr : int
* Return: 1 if prime or 0 if not
*/

int check_prime(int n, int othr)
{
	if (n <= 1)
		return (0);
	if (othr >= n)
		return (1);
	if (n % othr == 0)
		return (0);
	else
		return (check_prime(n, othr + 1));
}
