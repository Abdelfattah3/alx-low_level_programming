#include "main.h"

/**
* _memcpy - fills memory with constant byte
* @dest: pointer
* @src: constant
* @n: max bytes
* Return: pointer dest
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
