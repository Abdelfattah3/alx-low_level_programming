#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - prints strings
* @separator : string
* @n : int
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *name;
	va_list args;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		name = va_arg(args, char*);
		if (name == NULL)
		{
			name = "(nil)";
		}
		if ((i + 1) == n)
		{
			printf("%s", name);
		}
		else
		{
			printf("%s%s", name, separator);
		}
	}
	printf("\n");
	va_end(args);
}
