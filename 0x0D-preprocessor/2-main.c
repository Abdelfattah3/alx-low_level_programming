#include <stdio.h>
#include "main.h"
#include "string.h"
/**
* main - prints program name
* Return: 0
*/
int main(void)
{
	unsigned long int i;
	char *a;

	a = __FILE__;
	for (i = 0; i < strlen(__FILE__); i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
