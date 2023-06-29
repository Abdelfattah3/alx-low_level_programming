#include <stdio.h>
#include "main.h"

/*
* _strcat - function that concates two strings
* @dest: pointer
* @src: pointer
*
* Return: pointer to string
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
