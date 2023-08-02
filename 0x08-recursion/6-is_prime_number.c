#include "main.h"

/**
* is_prime_number - main checks for prime numbers
* @n : integer
* @m : number
* Return: int
*/

int check(int n, int m);
int is_prime_number(int n)
{
	return (check(n, 2));
}
/**
* check -return value
* @n : integer
* @m : number
* Return: int
*/
int check(int n, int m)
{
	if ((n < m) || (n % m == 0))
		return (0);
	else if (m != n)
		return (check(n, m + 1));
	else
		return (1);
}
