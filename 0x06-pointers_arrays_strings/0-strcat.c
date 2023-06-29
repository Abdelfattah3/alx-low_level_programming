#include <stdio.h>
#include "main.h"

/*
* _strcat - Concatenates two strings
* @dest: Pointer to the destination string
* @src: Pointer to the source string
*
* Return: void
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
