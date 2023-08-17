#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - sum all the arguments
* @separator : string
* @n : int
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = va_arg(args, int);
		if ((i + 1) == n)
		{
			printf("%d", sum);
		}
		else
		{
			printf("%d%s", sum, separator);
		}
	}
	printf("\n");
	va_end(args);
}
