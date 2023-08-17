#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
* struct format - format specifier
*
* @form : format
* @f : funcrion pointer
*/
typedef struct format
{
	char *form;
	void (*f)(char *, va_list);
} Foramt;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
