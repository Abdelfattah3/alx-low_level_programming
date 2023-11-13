#include <stdio.h>
#include "main.h"

/**
* _strncat - Concatenates two strings
* @dest: Pointer to the destination string
* @src: Pointer to the source string
* @n: input
* Return: pointer to  a string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
