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
	if (n <= 1)
		return (0);
	if (n == m)
		return (1);
	if ( n % m == 0)
		return (0);
	return (check(n, m + 1));
}
