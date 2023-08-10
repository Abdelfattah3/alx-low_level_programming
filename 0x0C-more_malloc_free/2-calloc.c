#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocated memory
* @nmemb : unsigned int
* @size : unsigned int
* Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *b;
	unsigned int l, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	i = 0;
	l = nmemb * size;
	a =  malloc(l);
	if (a == NULL)
	{
		return (NULL);
	}
	b = a;
	for (i = 0; i < l; i++)
	{
		b[i] = 0;
	}
	return (a);
}
