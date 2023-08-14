#include <stdio.h>
#include "main.h"
#include "string.h"


int main(void)
{
	long unsigned int i;
	char *a;

	a = __FILE__;
	for (i = 0; i < strlen(__FILE__); i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
