#include "variadic_functions.h"
/**
* sum_them_all - sum all the arguments
* @n : an int
* Return: an int
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
