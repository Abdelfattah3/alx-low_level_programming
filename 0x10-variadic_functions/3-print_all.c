#include "variadic_functions.h"
#include <stdio.h>
#include "variadic_functions.h"
/**
* format_char - prints char
* @s : separator
* @ap : pointer
*/
void format_char(char *s, va_list ap)
{
	printf("%s%c", s, va_arg(ap, int));
}
/**
* format_float - prints float
* @s : separator
* @ap : pointer
*/
void format_float(char *s, va_list ap)
{
	printf("%s%f", s, va_arg(ap, double));
}
/**
* format_int - prints int
* @s : separator
* @ap : pointer
*/
void format_int(char *s, va_list ap)
{
	printf("%s%d", s, va_arg(ap, int));
}
/**
* format_string - prints string
* @s : separator
* @ap : pointer
*/
void format_string(char *s, va_list ap)
{
	char *name = va_arg(ap, char*);

	switch ((int)(!name))
	case 1:
	{
		name = "(nil)";
	}
	printf("%s%s", s, name);
}
/**
* print_all - print all arugments
* @format : string
*/
void print_all(const char * const format, ...)
{
	int i, j;
	va_list ap;

	char *sep = "";
	Foramt form_t[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (form_t[j].form)
		{
			if (format[i] == form_t[j].form[0])
			{
				form_t[j].f(sep, ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
