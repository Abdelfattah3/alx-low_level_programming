#include <stdio.h>
#include "main.h"

/**
* _strncpy - Concatenates two strings
* @dest: Pointer to the destination string
* @src: Pointer to the source string
* @n: input
* Return: pointer to  a string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
