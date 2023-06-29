#include <stdio.h>
#include "main.h"

/**
* reverse_array - Concatenates two strings
* @a: string 1
* @n: string 2
* Return: 1 if true 0 if false
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
